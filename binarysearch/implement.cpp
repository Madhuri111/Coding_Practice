#include<bits/stdc++.h>

using namespace std;

void binary(int A[],int l,int r,int element)
{
    if(r>=l)
    {
        // cout << l << "hey" ;
        int mid= l+(r-l)/2;
        if(A[mid]==element)
        {
            cout << "found " << element << " at " << mid+1 << endl;
            // break;
            return;
        }
         if(A[mid]>element)
        {
            binary(A,l,mid-1,element);
        }
        // else
        // {
            binary(A,mid+1,r,element);
        // }
    }

    // else
        cout << "not found" << endl;


     
  
}

int main()
{
    int A[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    int n=sizeof(A)/sizeof(A[0]);
    binary(A,0,n-1,12);
}
