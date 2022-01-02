#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>

using namespace std;

vector<int> graph[101];
queue<int> store;
vector<int> visit;
vector<int> level;
vector<int> timez[101];
int tim=0;

void dfs(int cur)
{
	store.push(cur);
	visit[cur]=1;
	tim+=1;
	timez[cur].push_back(tim);
	while(!store.empty())
	{
		int j=store.front();
		cout << j << " level " <<  level[j] << " time " <<  tim << "\n ";

		store.pop();
		for(auto i=graph[j].begin();i!=graph[j].end();i++)
		{
			//cout << "hey" << " " << *i << " " ;
			if(visit[*i]==0)
			{
				level[*i]=level[j]+1;
				//				store.push(*i);
				dfs(*i);
			}
			visit[*i]=1;
			tim+=1;
			//timer[i]=time;
			timez[cur].push_back(tim);
		}
	}
}
int main()
{
	level.assign(101,0);
	visit.assign(101,0);
	int n; //nodes
	int m; //edges
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b ;
		graph[a].push_back(b);
		//		graph[b].push_back(a);
	}
	cout << "graph and edges " << "\n";
	for(int j=1;j<=m;j++)
	{
		for(auto i=0;i!=graph[j].size();i++)
		{
			cout << j << " " << graph[j][i] << "\t";
		}
		cout << "\n" ;
	}
	level[1]=1;
	dfs(1);
	cout <<  "times" << " \n" ;
	for(int j=0;j<n;j++)
	{
		for(auto i=0;i!=timez[j].size();i++)
		{
//			cout << timez[j][i].front() << timez[j][i].back() << "\t" ;
			cout << j << " " << timez[j][i] << "\t";
		}
		cout << "\n" ;
	}
}
