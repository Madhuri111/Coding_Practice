#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> A={0, 1, 1, 0, 0, 1};
	    unordered_map<int,int> g;

    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
            A[i]=-1;

    }

    int ans,max_sum=0,sum=0;
    g[0]=-1;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(max_sum<i-g[sum])
        {
            max_sum=i-g[sum];
        }
        g[sum]=i;
    cout <<max_sum << endl;
    }

    cout <<max_sum << endl;
}
