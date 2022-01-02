#include<bits/stdc++.h>

using namespace std;
vector<int> solve(vector<int> &A) {

    int n=A.size();

    unordered_map<int,int> g;
    vector<int> B;
    B.resize(n);
    for(int i=0;i<n;i++)
    {
        g[A[i]]++;
    }

    for(int i=0;i<n;i++)
    {
       cout <<  g[A[i]] << " " ;
    }
    for(int i=0;i<n;i++)
    {
        if(g[A[i]]>1)
        {
            B[i]=A[i]+1;
            g[A[i]]=0;
        }
        else
            B[i]=A[i];
       cout <<  g[A[i]] << " " ;
    }

    return B;

}

int main()
{
	vector<int> A={1,1};
	vector<int> B=solve(A);
	for(int i=0;i<B.size();i++)
	{
		cout <<B[i] << endl;
	}	
}
