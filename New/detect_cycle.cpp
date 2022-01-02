#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
vector<int> u[101];
vector<int> v[101];

vector<int> visit;
vector<int> level;
stack<int> store;

void dfs(int cur)
{
	visit[cur]=1;
	for(auto i=u.begin();i!=u.end();u++)
	{
		if(visit[*i]==0)
		{
			dfs(*i);
		}
	}
		store.push(*i);
}

int flag=0;
void ddfs(int cur)
{
	visit[cur]=1;
	for(auto i=v.begin();i!=v.end();u++)
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
		u[a].push_back(b);
		//pushing reverse edges
		v[b].push_back(a);
	}
	for(int i=1;i<n;i++)
        {
                if(visit[i]==0)
                {
                        dfs(i);
                }
        }
        memset(visit,0,sizeof(visit));
	while(!store.empty())
	{
		if(vis[store.top()]==0)
		{
//	dfs(1);
}
