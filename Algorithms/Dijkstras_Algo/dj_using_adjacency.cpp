#include<bits/stdc++.h>
using namespace std;
//creating heap........where i am storing nodes which are not included in shortest path tree(where distance values are not modified correctly)
//extracting minimum from heap (dijkstra's logic of connecting to shortest one outside) and visiting all adjacent nodes....and modifying it's distance values.....let's do it :-)
//1---> creating a vector pair for storing inputs.........
//2---> creating a vector for storing distance values whose values are initially iniialized to infinity.....
//3---> creating a priority queue for making use of heap
//vector< pair<int,int> > vect_pair; why it is showing error ma...........
typedef pair<int,int> vect_p;
vector<vect_p> vect_pair[100];
vector<int> values(100,INT_MAX); //intializing all values to infinity
void shortest(int src)
{
	//creating PQ
	priority_queue< vect_p , vector< vect_p> , greater<vect_p> > myPQ;
	myPQ.push(make_pair(0,src));  //initially pushing source into pq
	values[src]=0;	              //spt values for every node is infinty except source
	while(!(myPQ.empty()))     //we will visit all nodes until all adjacent nodes are modified
	{
		int store=myPQ.top().second;
		myPQ.pop();
		for(auto x: vect_pair[store])
		{
			int vert=x.first;
			int weight=x.second;
			if(values[vert]>values[store]+weight)
			{
				values[vert]=values[store]+weight;
				myPQ.push(make_pair(values[vert],vert));
			}
		}
	}
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		vect_pair[a].push_back({b,w});
		vect_pair[b].push_back({a,w});
	}
	int source;
	shortest(source);
}
