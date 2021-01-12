#include<stdio.h>
#include<stdlib.h>

struct linked {
    int data;
    struct linked *l,*r;
};

struct linked *n1;

int small(struct linked *cur)
{
	while(cur->l!=NULL)
	{
		cur=cur->l;
	}
	return cur->data;
}
int big(struct linked *cur)
{
	while(cur->r!=NULL)
	{
		cur=cur->r;
	}
	return cur->data;

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

int search(struct linked *cur,int val)
{
    if(cur==NULL)
    {
        return 0;
    }
    else{
        if(cur->data==val)
        {
            return 1;
        }
        else{
            if(val>cur->data)
            {
                return search(cur->r,val);
            }

            else
            {
                return search(cur->l,val);
            }
        }
    }
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
    printf("%d is small \n",small(n1));
    printf("%d is big \n",big(n1));
}
