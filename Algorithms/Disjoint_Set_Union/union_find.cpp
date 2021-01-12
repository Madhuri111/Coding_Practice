#include<bits/stdc++.h>
using namespace std;
int lead[10001]={0};
int result=0;
vector<int> size(1001,1);
struct node
{
	int src,dest,weight;
};
vector<node> edge;
bool comp(node p1,node p2)
{
	return p1.weight<p2.weight;
}
int find_lead(int cur)
{
	if(cur==lead[cur])
		return cur;
	else
		return lead[cur]=find_lead(lead[cur]);
}
bool union1(int u,int v,int weight)
{
	u=find_lead(u);
	v=find_lead(v);
	if(u==v)
		return 0;
	else if(size[u]>=size[v])
	{
		size[u]++;
		lead[v]=u;
		result+=weight;
	}
	else
	{
		size[v]++;
		lead[u]=v;
		result+=weight;
	}
}

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		scanf("%d %d %d",&a,&b,&w);
		edge.push_back({a,b,w});
		lead[a]=a;
		lead[b]=b;
	}
	sort(edge.begin(),edge.end(),comp);
	for(int i=0;i<m;i++)
	{
		union1(edge[i].src,edge[i].dest,edge[i].weight);
	}
	printf("%d\n",result);
}
