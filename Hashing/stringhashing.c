#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int m=41;
int p;
int func(char c)
{
	return (c-'a')+1;
}
int du(int x,int y,int mod)
{
	int t,s,sult=0;
	t= x%mod;
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
	char str[]="abcb";
	int ans[100001];
	int p=37;
	ans[0]=str[0];
	printf("%d--\n",ans[0]);
	for(int i=1;i<strlen(str);i++)
	{
		int a=du(p,i-1,m);
		int x=(a*func(str[i]));
		ans[i]=(ans[i-1]+x)%m;	
		printf("%d\n",ans[i]);
	}
	int b[10001];
	int a=du(37,3,m);
	b[strlen(str)-1]=a*2;
	int j=1;
	for(int i=strlen(str)-2;i>0;i--)
	{
		int a=du(p,i-1,m);
		int x=(a*func(str[i]));
		b[i]=(b[i+1]+x)%m;
		printf("%d %d %d\n",a,x,b[i]);
	}
	int q;
//	scanf("%d",&q);
	for(int k=0;k<q;k++)
	{
//		scanf("%d%d",&i,&j);
	}
}

