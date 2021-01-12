#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int m=997;
int p;
int func(char c)
{
	return ((int)c-(int)'a')+1;
}
int du(int x,int y,int mod)
{
	if(y==0 || y==1)
		return 1;
	int t,s,sult=0;
	t=x%mod;
	s=y;
	while(s>0)
	{    
		if(s%2==1)
		{
			sult=(sult+t)%mod;
		}
		t=(2*t)%mod;
		s=s/2;
	}
	return sult;

}
int main()
{
	char str[]="abba";
	int ans[100001];
	int p=7;
	ans[0]=func(str[0]);
	for(int i=1;i<strlen(str);i++)
	{
		int a=du(p,i-1,m);
		int x=(a*func(str[i]));
		ans[i]=(ans[i-1]+x)%m;	
		printf("%d\n",ans[i]);
	}
	int suffix[10001];
	int a=du(p,3,m);
	int j=1;
	suffix[0]=(a*str[strlen(str)-1]);
	for(int i=1;i<strlen(str);i++)
	{
		int x=(du(p,i-1,m)*func(str[strlen(str)-i-1]));
		suffix[i]=(suffix[i-1]+x)%m;
		printf("%d\n",suffix[i]);
	}
	int q;
//	scanf("%d",&q);
	for(int k=0;k<q;k++)
	{
//		scanf("%d%d",&i,&j);
	}
}

