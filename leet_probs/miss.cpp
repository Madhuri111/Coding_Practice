#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A={2,2};
    vector<int> v(A.size()+1, 0);
    int n=A.size();
    for(int i=1;i<=n;i++)    {
        
            v[A[i-1]]++;
        cout << v[i] << endl;
        
    }
    vector<int> temp(2);
    for(int i=1;i<=n;i++)
    {
        if(v[i]==2)
        {
            // cout << i << endl;
            temp[0] = i;
            break;
        }
        
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            temp[1] = i;
            break;
        }
    }
    cout << temp[0] << temp[1] << endl;
    
    // auto x = std::find(v.begin(),v.end(),0);
    // temp.push_back(x-v.begin());
    // cout << x-v.begin() << endl;
    // return n+1;
    // return temp;
}
