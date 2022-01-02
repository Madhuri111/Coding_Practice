#include<bits/stdc++.h>
using namespace std;

int vis[1001]={0};
queue<int> q;
void bfs(vector<int> adj[],int val)
{
	vis[val]=1;
	q.push(val);
	while(!q.empty())
	{
		val=q.front();
		cout << val << endl;
		q.pop();
		for(auto x:adj[val])
		{
			if(vis[x]==0)
			{
				q.push(x);
				vis[x]=1;
			}
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
		adj[b].push_back(a);
	}
	bfs(adj,0);

}
