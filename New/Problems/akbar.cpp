#include<iostream>
#include<vector>
#include<queue>

int n,m,k;

using namespace std;
int main()
{
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
		cin >> n >> m >> k;
		// vector<int> global;
		// global.assign(global.size(), 0);
		int global[n+1]={0};
		vector<int> u[n+1];
		vector<int> v[n+1];
		for(int j=0;j<m;j++)
		{
			int a,b;
			cin >> a >> b;
			u[a].push_back(b);
			u[b].push_back(a);
		}
		for(int l=0;l<k;l++)
		{
			int a,b;
			cin >> a >> b;
			int flag=0;
			for(auto mm=u[a].begin();mm!=u[a].end();mm++)
			{
				global[a]=1;
				while(flag<b)
				{
					global[mm]=1;
					flag++;
				}
			}
		}
		int check=0;
		for(auto x=1;x<=n;x++)
		{	
			if(global[x]==0)
			{
				check=1;
			}
		}
		if(check==0)
		{
			cout << "YES" << "\n";
		}
		else
			cout << "NO" << "\n";

	}
}
