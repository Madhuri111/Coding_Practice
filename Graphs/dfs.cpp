//Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted

#include<vector>
#include<iostream>
#include<queue>

using namespace std;

vector<int> myV[105];
queue<int> q;
int vis[10001]={0};

void dfs(int cur)
{
	q.push(cur);
	vis[cur]=1;
	while(!(q.empty()))
	{
		int cur=q.front();
		cout << q.front() << "\n";
		q.pop();
		vector<int>::iterator i;
		for(auto i =myV[cur].begin();i != myV[cur].end();i++)

		{
			if(vis[*i]==0)
			{
				vis[*i]=1;
				dfs(*i);
			}
		}
	}
	//printf("%d\n",cur);
}

		


int main()
{
	int n,m; //n and m are vertices and edges count
	int a,b; //edges input variables
	cin >> n >> m;
	//iteratte until the last edge
	for(auto i=0;i<m;i++)
	{
		cin >> a >> b;
		myV[a].push_back(b);
		myV[b].push_back(a);
	}
	dfs(1);
}


