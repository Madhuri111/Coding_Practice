#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
vector<int> myV;
int cal[100001],distanc[100001];
//vector<int> disance;
vector<int> weight;
vector<int> u[101];
vector<int> v[101];
void relax(int u,int v,int w)
{
	if(distanc[v]>distanc[u]+w)
	{
		distanc[v]=distanc[u]+w;
	}
}
int main()
{
	int n,m,p,w;
	cin >> n >> m >> p;
	for(auto i=0;i!=m;i++)
	{
		scanf("%d %d %d",&u[i],&v[i],&w);
		cal[i]=w;
	}
	int source,destination;
	scanf("%d %d",&source,&destination);
	vector<int>::iterator i;
	for(auto i=1;i<=n;i++)
	{
		distanc[i]=INT_MAX;
	}
	distanc[source]=0;
	for(int j=1;j!=n;j++)
	{
		for(int k=1;k<=m;k++)
		{
			relax(u[k],v[k],cal[k]);
		}
	}
	cout << distanc[destination] << "\n";
 }
