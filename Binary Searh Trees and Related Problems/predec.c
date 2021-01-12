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
			while(cur->l)
			{
				cur=cur->l;
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
    predec(n1,70);
    printf("%d %d are Pre and Suc \n",pre->data,suc->data);

}
