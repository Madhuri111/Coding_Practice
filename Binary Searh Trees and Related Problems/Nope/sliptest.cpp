#include<vector>
#include<iostream>
#include<queue>
using namespace std;
vector<int> myV[105];
queue<int> q;
int vis[1000]={0};
int level[10001]={0};
int val=0;
int color[10001]={0};
int flag;
void bfs(int cur)
{
	vis[cur]=1;
	color[cur]=0;
	q.push(cur);
	while(!(q.empty()))
	{
		cur=q.front();
		cout << q.front()  << "\t";
		cout << level[cur] << "\t";
		cout << color[cur] << "\n";
		q.pop();
		vector<int>::iterator i;
		val++;
		for(auto i=myV[cur].begin();i != myV[cur].end();i++)
		{
			if(vis[*i]==0)
			{
				level[*i]=level[cur]+1;	
				q.push(*i);
				vis[*i]=1;
			}
			if(color[cur]==0)
				color[*i]=1;
			if(color[cur]==1)
				color[*i]=0;
			/*if(*i!=myV[cur-1].end())
			{
				if(color[*i]!=color[*i-1])
				{
					printf("NO");
				}
			}*/
		}
	}
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
	bfs(1);
	for(int j=0;j<m;j++)
	{
		flag=0;
		int me=color[j];
		for(auto ite=myV[j].begin();ite != myV[j].end();ite++)
		{
			if(me!=color[*ite])
			{
				flag=0;
			}
			else
				flag=1;
		}
		if(flag==1)
		{
			printf("NO\n");
			break;
		}
	}
	if(flag==0)
		printf("YES\n");
}
