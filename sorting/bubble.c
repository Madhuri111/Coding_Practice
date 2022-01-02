#include<stdio.h>

int main()
{
    int flag=0;
    int arr[5]={3,2,9,5,1};
    // int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap if they are in wrong order
                int temp=arr[j];
                flag=1;
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        printf("printing array \n \n");
        for(int k=0;k<5;k++)
        {
            printf("%d \t",arr[k]);
        }
        if(flag==0)
            break;
        printf("\n");
    }
    printf("printing array here after everything sorted\n ");
        for(int k=0;k<5;k++)
        {
            printf("%d \t",arr[k]);
        }
        printf("\n");

        //when you give in sorted order,it still takes(On2) as it have to go through everything.

}