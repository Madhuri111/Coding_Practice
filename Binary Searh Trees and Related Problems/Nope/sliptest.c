#include<stdio.h>
#include<stdlib.h>
struct linked
{
	int value;
	int sum;
	struct linked *l,*r;
};
struct linked *n1;
void inorder(struct linked* cur)
{
	if(cur==NULL)
		return;
	inorder(cur->l);
	printf("%d %d\n",cur->value,cur->sum);
	inorder(cur->r);
}
struct linked* insert(struct linked *cur,int value)
{
	if(cur->l==NULL)
		cur->sum=0;
	if(cur->r==NULL)
		cur->sum=0;
	if(cur==NULL)
	{
		struct linked *new;
		new=(struct linked* )malloc(sizeof(struct linked));
		new->l=NULL;
		new->r=NULL;
		new->value=value;
		new->sum=value;
		return new;
	}
	else
	{
		if(value>cur->value)
		{
			cur->r=insert(cur->r,value);
			if(cur->l==NULL)
				cur->sum=cur->value+(cur->r->sum);
			if(cur->r==NULL)
				cur->sum=cur->value+(cur->l->sum);
		}
		else
		{
			cur->l=insert(cur->l,value);
			if(cur->l==NULL)
				cur->sum=cur->value+(cur->r->sum);
			if(cur->r==NULL)
				cur->sum=cur->value+(cur->l->sum);
		}
		return cur;
	}
}
int search(struct linked *cur,int val)
{
	if(cur==NULL)
	{
		return 0;
	}
	else
	{
		if(cur->value==val)
			return 1;
		else
		{
			if(val>cur->value)
				return search(cur->r,val);
			else
				return search(cur->l,val);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	n1=NULL;
	int g;
	for(int i=0;i<=n;i++)
	{
		scanf("%d",&g);
		if(search(n1,g)==1)
		{
		}
		else
		{
			n1=insert(n1,g);
		}
	}
	inorder(n1);
}
