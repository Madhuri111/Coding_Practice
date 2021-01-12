//Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted

#include<vector>
#include<iostream>
#include<queue>

using namespace std;

vector<int> myV[105];
queue<int> q;
int vis[10001]={0};
int level[10001]={0};


/*
 * for counting number of nodes at the given level
 *
     int count = 0;
    for (int i = 0; i < V; i++) 
        if (level[i] == l)
            count++;    
    return count; 
 * /

void bfs(int cur)
{
	q.push(cur);
	vis[cur]=1;
	while(!(q.empty()))
	{
		int cur=q.front();
		cout << q.front() << "Level-" << level[cur] << "\n";
		q.pop();
		vector<int>::iterator i;
		for(auto i =myV[cur].begin();i != myV[cur].end();i++)

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
	bfs(1);
}


