#include<stdio.h>

int main()
{
    int A[4];
    A[0]=1;A[1]=3;A[2]=4;
    printf("%d \n",A);  //base address
    printf("%d \n",*(A+1)); //value of required element base+offset
}

 