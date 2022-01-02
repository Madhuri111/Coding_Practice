#include<vector>
#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
vector<int> myV[105];
vector<int> myV1[105];
int vis[1000]={0};
int j=0;
int d1[100001]={0},d2[10001]={0};
stack<int> s;
void dfs(int cur)
{
//	vis[cur]=1;
	vector<int>::iterator i;
	for(auto i=myV[cur].begin();i !=myV[cur].end(); i++)
	{
//		if(vis[*i]==0)
//		{
			dfs(*i);
//		}
	}
			s.push(cur);
}
void ddfs(int cur)
{
	vis[cur]=1;
	vector<int>::iterator i;
	cout<<cur<<endl;
	for(auto i=myV1[cur].begin();i !=myV1[cur].end(); i++)
	{
//		if(vis[*i]==0)
//		{
			ddfs(*i);
//		}
	}
//	cout<<"Over"<<"\n";
}
int main()
{
	int n,m,a,b;
	cin >> n;
	cin >> m;
	for(auto i=0;i<m;i++)
	{
		cin >> a;
		cin >> b;
		myV[a].push_back(b);
		myV1[b].push_back(a);
	}
	for(int i=1;i<n;i++)
	{
//		if(vis[i]==0)
//		{
			dfs(i);
//		}
	}
/*	while(!s.empty())
	{
		cout<< s.top() << "\n";
			s.pop();
	}*/
	memset(vis,0,sizeof(vis));
	while(!s.empty())
	{
		if(vis[s.top()]==0)
		{
			ddfs(s.top());
		}
		s.pop();
		cout<< "over once" << "\n";
	}
}

