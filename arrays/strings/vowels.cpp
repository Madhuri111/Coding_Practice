#include<bits/stdc++.h>
using namespace std;
int isVowl(char ch)
{
    if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u')
    {
        return 1;
    }
    else return 0;
}

int solve(string A) {

    int n=A.size();
    int countc[n+1]={0};
    const unsigned int M = 1000000007;


    countc[n-1]=isVowl(A[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(isVowl(A[i]))
        {
            // cout << A[i] ;
            countc[i]=countc[i+1]+1;
        }
        else    
            countc[i]=countc[i+1];

        // cout << countc[i] << endl;
        
    }

    long long ans=0;
    for(int i=0;i<n;i++)
    {
        if(isVowl(A[i]))
        {
            // cout << A[i] ;

            ans+=countc[i+1];

            cout << ans;
        }
    }

    return ans%M;
}

int main()
{
string str = "inttnikjmjbemrberk";
    cout << solve(str);
}
