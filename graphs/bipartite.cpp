#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n;
	cin >> m;
	vector<int> hey[n];
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b;
		hey[a].push_back(b);
	}

	//dfs(0,hey);
	vector<int> colors(n,0);

	queue<int> q;
        for (int i = 0; i < n; i++) {
            if (colors[i]) continue;
            
            colors[i] = 1;
            q.push(i);
            
            while (!q.empty()) {
                int temp = q.front();
                
                for (auto neighbor : graph[temp]) {
                    
					// Color neighbor with opposite color
                    if (!colors[neighbor]){
                        colors[neighbor] = -colors[temp];
                        q.push(neighbor);
                    }
                    
					// If the neighbor has the same color - can't bipartite.
                    else if (colors[neighbor] == colors[temp]) 
                        return false;
                }
                q.pop();
            }
        }
        return true;
}

