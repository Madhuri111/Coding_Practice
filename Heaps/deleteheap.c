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
	return result;
}
int right(int i)
{
	int result=2*i+2;
	return result;
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
void minheapify(int i)
{
	int l=left(i);
	int r=right(i);
	printf("right--%d\n",r);
	int small=i;
	if(l<heap_size && arr[small]>arr[l])
	{
		small=l;
		printf("%d %d %d %dh--in l,",small,arr[l],arr[r],heap_size);
	}
	if(r<heap_size && arr[small]>arr[r])
	{
		small=r;
		printf("%d %d--in r,",small,i);
	}
	if(small!=i)
	{
		printf("%d -- %d\n",arr[small],arr[i]);
		int temp=arr[i];
		arr[i]=arr[small];
		arr[small]=temp;
		minheapify(small);
	}
}
void del(int i)
{
	int temp=arr[heap_size-1];
	arr[heap_size-1]=arr[i];
	arr[i]=temp;
	heap_size--;
	minheapify(i);
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
		printf("%d\t",arr[i]);
	printf("\n");
	del(1);
	for(int i=0;i<heap_size;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
