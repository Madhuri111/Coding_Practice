#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    vector<int> A={1,2,3,1,1};
     vector<int> v(A.size()+1, 0);
    int n=A.size();
    for(int i=1;i<=n;i++)    {
        
            v[A[i-1]]++;
        // cout << v[i] << endl;
        
    }
    int temp=0;
    for(int i=1;i<=n;i++)
    {
                cout << v[i] << endl;

        if(v[i]>n/3)
        {
                        temp = A[i-1];

            cout << temp << endl;
            break;
        }
        
    }
    // if(temp!=0)
    //     return temp;
    // else
    //     return -1;
}