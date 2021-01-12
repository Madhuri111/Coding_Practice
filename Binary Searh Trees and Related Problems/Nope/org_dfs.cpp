#include<vector>
#include<iostream>
using namespace std;
vector<int> myV[105];
int vis[1000]={0};
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
	cout << cur << "\n";
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
		myV[b].push_back(a);
	}
	vector<int>::iterator ite;
	int i=0;
	dfs(1);
	/*for(int i=0;i<n;i++)
	{
		dfs(myV);
	}*/
}
