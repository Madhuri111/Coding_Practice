#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
vector<int> u[101];
vector<int> v[101];
int visit[101];
vector<int> level;
stack<int> store;

void dfs(int cur)
{
	visit[cur]=1;
	for(auto i=u[cur].begin();i!=u[cur].end();i++)
	{
		if(visit[*i]==0)
		{
			dfs(*i);
		}
	}
	store.push(cur);
}
int flag=0;
void ddfs(int cur)
{
	visit[cur]=1;
	cout << cur << ' ';
	for(auto i=v[cur].begin();i!=v[cur].end();i++)
	{
		if(visit[*i]==0)
		{
			ddfs(*i);
		}
	}
	flag++;
}
int main()
{
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b;
		u[a].push_back(b);
		//pushing reverse edges
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
        {
                if(visit[i]==0)
                {
                        dfs(i);
                }
        }
        memset(visit,0,sizeof(visit));
	while(!store.empty())
	{
		if(visit[store.top()]==0){
			ddfs(store.top());	
			cout << '\n';
		}
		store.pop();
	}
}

