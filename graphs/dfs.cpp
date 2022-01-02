#include<bits/stdc++.h>
using namespace std;

int vis[1001]={0};
void dfs(vector<int> adj[],int val)
{
	vis[val]=1;
		cout << val << endl;
	for(auto x:adj[val])
	{
			if(vis[x]==0)
			{
				dfs(adj,x);
			}
	}
}


int main()
{
	int n,m,a,b;
	cin >> n;
	cin >> m;

	vector<int> adj[n];
	
	//traverse till all edges
	for(int i=0;i<m;i++)
	{
		cin >>a;
		cin >>b;
		adj[a].push_back(b);
	//	adj[b].push_back(a);
	}
	dfs(adj,0);

}
