#include<stdio.h>

int main()
{
    int n=5;
    int arr[5]={25,17,31,13,2};
    for(int i=0;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            // int temp=arr[j];
            // arr[j]=arr[j+1];
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
     printf("printing array \n \n");
        for(int k=0;k<5;k++)
        {
            printf("%d \t",arr[k]);
        }
}