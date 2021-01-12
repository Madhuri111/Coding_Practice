#include<stdio.h>
#include<stdlib.h>

struct linked {
	int data;
	struct linked *l,*r;
};

struct linked *n1;
struct linked *pre=NULL;
struct linked *suc=NULL;

void predec(struct linked *cur,int val)
{
	if(cur==NULL)
		return;
	if(cur->data==val)
	{
		if(cur->l)
		{
			struct linked *new;
			new=(struct linked*)malloc(sizeof(struct linked));
			new=cur->l;
			while(new->r)
			{
				new=new->r;
			}
			pre=new;
		}
		if(cur->r)
		{
			struct linked *new;
			new=(struct linked*)malloc(sizeof(struct linked));
			new=cur->r;
			while(cur->r)
			{
				cur=cur->r;
			}
			suc=new;
		}
		return;
	}
	if(cur->data>val)
	{
		suc=cur;
		predec(cur->l,val);
	}
	else
	{
		pre=cur;
		predec(cur->r,val);
	}
}

//need successor code , which means to find minimum in right subtree and return that particular node

struct linked* succ(struct linked *cur)
{
	struct linked *new=cur;
	while(new && new->l!=NULL)
	{
		new=new->l;
	}
	return new;

}
struct linked* delete(struct linked *cur,int val)
{
	if(cur==NULL)
		return cur;
	else if(val>cur->data)
	{
		cur->r=delete(cur->r,val);
	}
	else if(val<cur->data)
	{
		cur->l=delete(cur->l,val);
	}
	else if(val==cur->data)
	{
		/*
		if(cur->l==NULL && cur->r==NULL)
		{
			free(cur);
			return NULL;
		}
		*/
		if(cur->l==NULL)
		{
			struct linked* new=cur->r;
			free(cur);
			return new;
		}
		if(cur->r==NULL)
		{
			struct linked* new=cur->l;
			free(cur);
			return new;
		}
		else
		{
			struct linked *temp=succ(cur->r);

			cur->data=temp->data;
			cur->r=delete(cur->r,temp->data);
		}
	}
	return cur;
}

struct linked* insert(struct linked *cur,int val)
{
	if(cur==NULL)
	{
		struct linked *new;
		new=(struct linked*)malloc(sizeof(struct linked));
		new->data=val;
		new->l=NULL;
		new->r=NULL;
		return new;
	}
	else
	{
		if(cur->data<val)
		{
			cur->r=insert(cur->r,val);
		}
		else
		{
			cur->l=insert(cur->l,val);
		}
		return cur;
	}
}

void inorder(struct linked *cur)
{
	if(cur==NULL)
		return;
	inorder(cur->l);
	printf("%d\t",cur->data);
	inorder(cur->r);
}

void postorder(struct linked *cur)
{
	if(cur==NULL)
		return;
	postorder(cur->l);
	postorder(cur->r);
	printf("%d\t",cur->data);
}

void preorder(struct linked *cur)
{
	if(cur==NULL)
		return;
	printf("%d\t",cur->data);
	preorder(cur->l);
	preorder(cur->r);
}

int main()
{
	n1=NULL;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int c;
		scanf("%d",&c);
		n1=insert(n1,c);
	}
	inorder(n1);
	printf(" above is Inorder \n");
	preorder(n1);
	printf("above is Preorder \n");
	postorder(n1);
	printf("above is Postorder \n");
	predec(n1,50);
	printf("%d %d are Pre and Suc \n",pre->data,suc->data);
	delete(n1,50);
	inorder(n1);
	printf(" above is Inorder \n");
}
