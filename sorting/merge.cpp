#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void merge(int arr[],int start,int mid,,int end)
{

    for(int i=a;i<b;i++)
    {

    }
}

void mergesort(int arr[],int l,int h)
{
    if(l<h)
    {
        int m=(l+h)/2;
        mergesort(arr,0,m);
        mergesort(arr,m+1,h);
        merge(arr,l,m,h);
    }
    else
    {
        return;
    }
}
int main()
{
    int arr[]={14,7,3,12};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout << len << endl;
    merge(arr,0,len);
}