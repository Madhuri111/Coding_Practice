#include<bits/stdc++.h>
// #include<map>
using namespace std;
int lengthOfLastWord(const string A) {

    int n=A.size();
    string temp="";
    int i=n-1,flag=1,index;
    if(n==1)
        return 1;
    if(A[n-1]==' ') flag=0;
    if(flag==0)
    {
        while(A[i]==' ') i--;
    }
    cout << i;
    // {
    //     for(i=n-2;i>=0;)
    //     {
    //         if(A[i]==' ')
    //             i--;
    //         else 
    //             break;
    //     }
    // }
    for(int j=i;j>=0;j--)
    {
        // cout << j << "jsv" ;
        if(A[j]==' ' ) break;
        // else if(A[j]==' ' && A[j-1]==' ') j-=2;
        else
            temp+=A[j];
    }
    return temp.length();
}


int main()
{
    cout << lengthOfLastWord("Wordl   ");
}