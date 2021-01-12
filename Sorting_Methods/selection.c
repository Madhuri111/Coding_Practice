#include<stdio.h>

//foor cpp code , just replace it with cout and cin

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d is n value \n",n);
	for(int i=0;i<n;i++)
	{
		int mini=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[mini])
			{
				mini=j;
			}
		}
		swap(&arr[i],&arr[mini]);
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
