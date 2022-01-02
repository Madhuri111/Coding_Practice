#include<bits/stdc++.h>

using namespace std;

int vis[100]={0};
void dfs(int cur, vector<int>  root[])
{
	vis[cur]=1;
	cout << cur << endl;
	for(auto it=root[cur].begin();it!=root[cur].end();it++)
	{
		if(vis[*it]==0)
		{
			vis[*it]=1;
			dfs(*it,root);
		}
	}
}


int main()
{
	int n,m;
	cin >> n;
	cin >> m;
	vector<int> hey[n];
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b;
		hey[a].push_back(b);
	}
	
	dfs(0,hey);
}

