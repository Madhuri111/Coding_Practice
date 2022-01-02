#include<vector>
#include<iostream>
#include<stack>
using namespace std;
vector<int> myV[105];
int vis[1000]={0};
int j=0;
stack<int> s;
void dfs(int cur)
{
	vis[cur]=1;
	vector<int>::iterator i;
	for(auto i=myV[cur].begin();i !=myV[cur].end(); i++)
	{
		if(vis[*i]==0)
		{
			dfs(*i);
		}
	}
			s.push(cur);
//	cout << cur << "\n";
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
//		myV[b].push_back(a);
	}
	for(int i=1;i<n;i++)
	{
		if(vis[i]==0)
		{
			dfs(i);
		}
	}
	while(!s.empty())
	{
		cout << s.top() << "\n";
		s.pop();
	}
}


