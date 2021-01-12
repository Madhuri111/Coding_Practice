#include<stdio.h>
#include<stdlib.h>
int arr[10001];
int heap_size=0;
int size=0;
int b[10001];
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
	int small=i;
	if(l<heap_size && arr[small]>arr[l])
		small=l;
	if(r<heap_size && arr[small]>arr[r])
		small=r;
	if(small!=i)
	{
		printf("%d -- %d\n",arr[small],arr[i]);
		int temp=arr[i];
		arr[i]=arr[small];
		arr[small]=temp;
		minheapify(small);
	}
}
int min(int n)
{
	for(int i=0;i<n;i++)
	{
		if(heap_size==0)
			return -1;
		if(heap_size==1)
		{
			heap_size--;
			return arr[heap_size];
		}
		else
		{
			int root=arr[0];
			int temp=arr[0];
			arr[0]=arr[heap_size-1];
			arr[heap_size-1]=temp;
			heap_size--;
			minheapify(i);
			b[size++]=root;
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
		printf("%d\t",arr[i]);
	printf("\n");
	//	int m=min(n);
	//	printf("min is --%d\n",m);
	for(int i=0;i<n;i++)
		printf("%d\t",b[i]);
	printf("\n");
}
