#include<bits/stdc++.h>

using namespace std;

string solve(string A, int B) {

    int n=A.size();

    string s="";
        int len=0;

    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1] )
        {
            len++;
            continue;
        }
         if(len==B)
         {
             len=0;
            continue;
         }
        else if( A[i]!=A[i+1] && A[i]!=A[i-1])
            s+=A[i];
    }

    return s;
}

int main()
{
    string s="abcddcbsa";
    cout << solve(s,2) << endl ;
}