#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[]={1,2,-1};
    int n=3;
    int max_val=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=abs(A[i]-A[j]) ;
             int temp2= abs(i-j);
            cout << i << j << " " << A[i] << A[j] << " " << temp+temp2 << endl;
            // cout << temp << "here " << endl;
            // max_val=max(temp,max_val);
            // cout << max_val << endl;
        }
    }
    cout << max_val <<endl;
}