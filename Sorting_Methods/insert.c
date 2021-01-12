#include<stdio.h>

//foor cpp code , just replace it with cout and cin

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		int j=i-1;
		int key=arr[i];
		while (j>=0 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
		/*
		   for(int r=0;r<n;r++)
		   {
		   printf("%d ",arr[r]);
		   }
		   printf("\n \n");
		   */
	}

	//printf("Final \n");
	//printf("%d \n",n);
	for(int i=0;i<n;i++)
	{
		//printf("%d \n",i);
		printf("%d",arr[i]);
	}
	printf("\n \n");
}
