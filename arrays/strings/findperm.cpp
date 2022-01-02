#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s="ID";
    // for(int i=0;i<2;i++)
    // {
    //     if(s[i]=='I')
    //         cout << s[i] << endl;
    // }

    int n=3;
    int l=1;
    int r=n;
    vector<int> v;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='I')
        {
            v.push_back(l);
            l++;
        }
        else
        {
            v.push_back(r);
            r--;
        }
    }
    if(n%2==0)
    {
        v.push_back(r);
    }
    else{
        v.push_back(l);
    }
    for(int i=0;i<n;i++)
    {
        cout << v[i] << endl;
    }
    // return v;


}