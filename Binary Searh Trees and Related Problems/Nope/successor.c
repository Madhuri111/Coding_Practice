#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	int value;
	struct tree *l,*r;
}tree;
tree *n1;
void inorder(tree* cur)
{
	if(cur==NULL)
		return;
	inorder(cur->l);
	printf("%d\n",cur->value);
	inorder(cur->r);
	//printf("\n");
}
/*void successor(tree* cur,int value)
  {
  if(cur==NULL)
  return;
  indorder(cur->l);
  if(cur->value==value)
  {
  return ;
  }
  }
 */
tree*  delete(tree * curr,int key)
{
	if(curr==NULL)
		return curr;
	else if(key==curr->value)
	{
		if(curr->l==NULL && curr->r==NULL)
		{
			free(curr);
			return NULL;
		}
		else if(curr->r==NULL)
		{
			tree * temp=curr->l;
			free(curr);
			return temp;
		}
		else if(curr->l==NULL)
		{
			tree * temp=curr->r;
			free(curr);
			return temp;
		}
	}
	else if(key>curr->value)
	{
		curr->r=delete(curr->r,key);
	}
	else if(key<curr->value)
	{
		curr->l=delete(curr->l,key);
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
	printf("Before\n");
	inorder(n1);
	n1=delete(n1,4);
	printf("After\n");
	inorder(n1);
}


