#include <bits/stdc++.h>
using namespace std;
 

class Graph{
    public:
        map<int,bool> visited;
        map<int,list<int>> adj;

        void addEdge(int v,int w); 

        void dfs(int v);
} ;

void Graph::addEdge(int a,int b)
{
    adj[a].push_back(b);
}

void Graph::dfs(int v)
{
    visited[v]=true;
    cout << v << endl;
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(visited[*i]==false)
        {
            dfs(*i);
        }
    }
}
int main()
{

    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    // g.addedge(0,1);

    g.dfs(2);
}

