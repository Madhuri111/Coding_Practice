#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    int A[]={1,2,3,4,5,6};
    int k=2;

    unordered_map<int,int> count_map;

    for(int i=0;i<6;i++)
    {
        count_map[A[i]%k]++;
    }
    int ans=0;
    for(auto it:count_map)
    {
        ans+=(it.second*(it.second-1))/2;
    }

    cout << ans << endl;
}