#include<bits/stdc++.h>
using namespace std;
//creating a typedef pair
typedef pair<int,long long int> my_pair;
vector<my_pair> vector_pair[100001];
int main()
{
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<m;i++)
	{
		int a,b;
		int weight;
		scanf("%d %d %d",&a,&b,&weight);
		vector_pair[a].push_back({b,weight});
		vector_pair[b].push_back({a,weight});
	}
	int source=0;
	//creating a vector pair for storing weight values;
	vector<int> values(n+5,INT_MAX);
	//creating a priority queue for storing vertices whose distances are not yet modified..
	priority_queue<my_pair,vector<my_pair>,greater<my_pair> > myPQ;
	int kk;
	vector<int>dupli(n+5,INT_MAX);
	vector<int>chu(n+5,false);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&kk);
		myPQ.push({0,kk});
		dupli[kk]=0;
		values[kk]=0;
	}
	while(!(myPQ.empty()))
	{	
		int require=myPQ.top().second;
		myPQ.pop();
		if(!chu[require]){
			chu[require]=true;
			for(auto all:vector_pair[require])
			{
				int weight=all.second;
				int v=all.first;
				if(!chu[v]){
					if(values[v]>dupli[require]+weight && !chu[v])
					{
						dupli[v]=values[v];
						values[v]=dupli[require]+weight;
						myPQ.push({dupli[v],v});
					}
					else if(dupli[v]> dupli[require]+weight && !chu[v]) {
						dupli[v]=dupli[require]+weight;
						myPQ.push({dupli[v],v});
					}
				}
			}
		}
	}
	for(int i=0;i<1;i++)
	{
		if(dupli[0]!=INT_MAX)
		{
			printf("%d\n",dupli[0]);
		}
		else
			printf("-1\n");
	}
}

