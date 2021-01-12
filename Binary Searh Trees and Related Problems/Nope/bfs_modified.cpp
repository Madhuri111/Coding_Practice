#include<vector>
#include<iostream>
#include<queue>
using namespace std;
vector<int> myV[105];
queue<int> q;
int vis[1000]={0};
int level[10001]={0};
int val=0;
void bfs(int cur)
{
	//	level[cur]=val;
	vis[cur]=1;
	q.push(cur);
	while(!(q.empty()))
	{
		cur=q.front();
		cout << q.front()  << "\t";
		cout << level[cur] << "\n";
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
	/*
	 for printing vector elements
	for(auto j=0;j<105;j++) 
	{
		for (auto x : myV[j]) 
			cout << j << x <<"";
		cout << endl;
	}
	*/
	vector<int>::iterator ite;
	int i=0;
	bfs(1);
}
