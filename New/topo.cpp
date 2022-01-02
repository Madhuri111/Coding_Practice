#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<stack>


using namespace std;

vector<int> graph[101];
queue<int> store;
vector<int> visit;
vector<int> level;
vector<int> timez[101];
int tim=0;
stack<int> s;
stack<int> d;

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
		s.push(cur);
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
		d.push(a);
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
	//	dfs(1);
	cout <<  "times" << " \n" ;
	for(int i=1;i<n;i++)
	{
		int k=d.top();
		if(visit[k]==0)
		{
			dfs(k);
		}
		d.pop();
	}
	for(int j=0;j<n;j++)
	{
		for(auto i=0;i!=timez[j].size();i++)
		{
			//			cout << timez[j][i].front() << timez[j][i].back() << "\t" ;
			cout << j << " " << timez[j][i] << "\t";
		}
		cout << "\n" ;
	}
	while(!s.empty())
	{
		cout << "topo"  << s.top() << "\n";
		s.pop();
	}

}
//example for input
/*
5 5
1 2
2 3
1 4
2 4
5 4
*/
