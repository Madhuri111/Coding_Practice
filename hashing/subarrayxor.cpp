#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> A={4,2,2,6,4};
	int n=A.size();
	int B=6;
	unordered_map<int,int> g;
	vector<int> ans(n);
	ans[0]=A[0];
	for(int i=1;i<n;i++)
	{
		ans[i]=ans[i-1]^A[i];
	}
	int as=0;
	for(int i=0;i<n;i++)
	{
		if(ans[i]==B) as++;
		if(g.find(ans[i]^B)!=g.end())
		{
			as+=g[ans[i]^B];

		}
		g[ans[i]]++;
	}
	cout << as << endl;
}
