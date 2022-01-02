#include<bits/stdc++.h>

using namespace std;

int count_sum(vector<int> &A,int y,int n )
{
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        
        int temp=A[i]-y;
        if(temp<=0)
            break;
        sum+=temp;
        // cout << sum << endl;
    }
    return sum;
}




int solve(vector<int> &A, int B) {

    sort(A.begin(),A.end());
        int n=A.size();

    int l=0,r=A[n-1];
    while(l<=r)
    {
        int mid=l + ((r-l)/2);
        int k=count_sum(A,mid,n);
        cout << k<< "hey" << mid << endl;
        // if(A[mid])
        if(k==B)
        {
            return mid;
        }
        if(k>B)
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    return -1;

}


int main()
{
    vector<int> A={114, 55, 95, 131, 77, 111, 141};
    // int n=sizeof(A)/sizeof(A[0]);
    cout << solve(A,95) << endl;
}
