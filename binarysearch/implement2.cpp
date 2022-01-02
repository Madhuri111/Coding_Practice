#include<bits/stdc++.h>

using namespace std;

int binary(int A[],int l,int r,int element)
{
    sort(A.begin(),A.end());
    while(r>=l)
    {
        // cout << l << "hey" ;
        int mid= l+(r-l)/2;
        if(A[mid]==element)
        {
            // cout << "found " << element << " at " << mid+1 << endl;
            // // break;
            // return;
            return mid;
        }
         if(A[mid]>element)
        {
            r=mid-1;
            // binary(A,l,mid-1,element);
        }
        // else
        // {
            // binary(A,mid+1,r,element);
        else
        {
            l=mid+1;
        }
        // }
    }
    return -1;

  
}

int main()
{
    vector<int> A[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    int n=sizeof(A)/sizeof(A[0]);
    cout << binary(A,0,n-1,12) << endl;
}
