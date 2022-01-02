#include<bits/stdc++.h>
using namespace std;
int dist[1000],src[1000],dst[10000],wt[10000];
int flag=0;
void relax(int k){
	if(dist[dst[k]]>dist[src[k]]+wt[k]&&dist[src[k]]!=INT_MAX){
		dist[dst[k]]=dist[src[k]]+wt[k];
		flag=1;
	}
}
int main(){
	int n,e;
	scanf("%d%d",&n,&e);
	int N=n;
	while(N--){
		dist[N+1]=1000;
	}
	int source,destination;
	scanf("%d%d",&source,&destination);
	dist[source]=0;
	for(int i=0;i<e;i++){
		scanf("%d%d%d",&src[i],&dst[i],&wt[i]);
		dst[e+i]=src[i];
		src[e+i]=dst[i];
		wt[e+i]=wt[i];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<2*e;j++){
			relax(j);
		}
		if(flag==0)
			break;
	}
	if(dist[source]<0){
		printf("negative cycle exists\n");
	}
	else
		printf("%d\n",dist[destination]);
}

