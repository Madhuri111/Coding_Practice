#include<stdio.h>
int arr[4]={5,1,0,-3};
void quick(int,int);
int n=4;
int partition(int start,int end)
{
	int index=start;
	int pivot=arr[end];
	for(int i=start;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			int temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
			index++;
		}
	}
	int temp=arr[index];
	arr[index]=arr[end];
	arr[end]=temp;
	return index;
}
int main()
{
	quick(0,n-1);
	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
void quick(int start,int end)
{
	if(start<end)
	{
		int index=partition(start,end);
		quick(start,index-1);
		quick(index+1,end);
	}
}
