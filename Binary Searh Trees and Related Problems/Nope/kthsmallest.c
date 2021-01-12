#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	int value;
	struct tree *l,*r;
	int num;
}tree;
tree *n1;
void inorder(tree* cur)
{
	if(cur==NULL)
		return;
	inorder(cur->l);
	printf("%d %d\n",cur->value,cur->num);
	inorder(cur->r);
	//printf("\n");
}
int findsmall(int k,tree* curr)
{
	if(k==curr->num+1)
	{
		return curr->value;
	}
	else if(k>curr->num+1)
	{
		curr=curr->r;
		findsmall(k-(curr->num+1),curr);
	}
	else if(k<curr->num+1)
	{
		curr=curr->l;
		findsmall(k,curr);
	}
}
tree * insert(tree *cur,int value)
{
	if(cur==NULL)
	{
		tree *new;
		new=(tree* )malloc(sizeof(tree));
		new->l=NULL;
		new->r=NULL;
		new->value=value;
		new->num=0;
		return new;
	}
	else
	{
		if(value>cur->value)
		{
			cur->r=insert(cur->r,value);
		}
		else
		{
			cur->l=insert(cur->l,value);
			cur->num++;
		}
		return cur;
	}
}
int search(tree *cur,int val)
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
	n1=NULL;
	int n;
	scanf("%d",&n);
	int g;
	for(int i=0;i<n;i++)
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
	printf("%d--\n",findsmall(4,n1));
}
