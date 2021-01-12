#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int arr[1000]={0,7,4,3,8,1,10};
int seg[10001];
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
void build(int pos,int m,int n)    //pos--current index in segment tree
{
	if(n==m)
	{
		seg[pos]=arr[m];
		return;
	}
	else
	{
		int mid=(m+n)/2;
		build(2*pos,m,mid);
		build(2*pos+1,mid+1,n);
		seg[pos]=max(seg[2*pos],seg[2*pos+1]);
	}
}
int query(int pos,int low,int high,int l,int r)
{
	if(low > r || high <l)
		return INT_MIN;
	else if(low>=l && high<=r)
	{
		return seg[pos];
	}
	int mid=(low+high)/2;
	int a=query(2*pos,low,mid,l,r);
	int b=query(2*pos+1,mid+1,high,l,r);
	return max(a,b);
}
void update(int pos,int low,int high,int i,int val)   //i is our original array index
{
	if(low==high)
	{
		seg[pos]=val;
		return;
	}
	int mid=(low+high)/2;
	if(i<=mid)
		update(2*pos,low,mid,i,val);
	else
		update(2*pos+1,mid+1,high,i,val);
	seg[pos]=max(seg[2*pos],seg[2*pos+1]);
}
int main()
{
	int n=6,pos=1;
	build(pos,1,n);
	//int m=query(pos,1,n,3,5);
	for(int i=0;i<4*n;i++)
		printf("%d\t",seg[i]);
	printf("\n");
	update(pos,1,n,2,8);
	printf("After updating\n");
	for(int i=0;i<4*n;i++)
		printf("%d\t",seg[i]);
	printf("\n");
}

