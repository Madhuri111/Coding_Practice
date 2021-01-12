 #include<stdio.h>
#include<stdlib.h>
int arr[10001];
int heap_size=0;
int parent(int i)
{
	int result=(i-1)/2;
	return result;
}
int left(int i)
{
	int result=2*i+1;
	return arr[result];
}
int right(int i)
{
	int result=2*i+2;
	return arr[result];
}
void insert(int val,int n)
{
	if(n==heap_size)
		exit;
	else
	{
		heap_size++;
		int i=heap_size-1;
		arr[i]=val;
		while(i!=0 && arr[parent(i)]>arr[i])
		{
			int temp=arr[parent(i)];
			arr[parent(i)]=arr[i];
			arr[i]=temp;
			i=parent(i);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int g;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&g);
		insert(g,n);
	}
	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
