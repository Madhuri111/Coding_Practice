#include<bits/stdc++.h>
using namespace std;
int main()
{

    // int A[]={3,5,4,2};
    //     int n=4;
    // int max_val=0;
    // int j=1;
    // vector<pair<int,int>> answer;
    // for(int i=0;i<n;)
    // {
    //     answer.push_back(make_pair(A[i],i));
    //     // if(A[i]<=A[j])
    //     // {
    //     //     max_val=max(max_val,(j-i));i++;
    //     //     cout << max_val << endl;
    //     //     // j++;
    //     // }
    //     // else
    //     // {
    //     //     j++;
    //     // }
    // }
    // sort(answer.begin(),answer.end())
    int A[]={3,2,1};
    //  int n=A.size();
    int n=3;


    vector<int> Lmin(n);
    vector<int> Rmax(n);
    Lmin[0]=A[0];
    Rmax[n-1]=A[n-1];
    // for(int)
    for(int i=1;i<n;i++)
    {
        Lmin[i]=min(Lmin[i-1],A[i]);
        // cout << Lmin[i] << endl;
    }

    for(int i=n-2;i>=0;i--)
    {
        Rmax[i]=max(Rmax[i+1],A[i]);
    }
    int i,j=0;
    int max_val=0;
    while(i<n && j<n)
    {
        if(Lmin[i]<=Rmax[j])
        {
            max_val=max(max_val,j-i);
            // cout << max_val << " "<< Lmin[i] << Rmax[j] << endl;
            j++;
        }
        else{
            i++;
        }
        
    }
    cout << max_val << endl; 
};