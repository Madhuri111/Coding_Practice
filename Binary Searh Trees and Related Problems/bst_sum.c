#include<stdio.h>
#include<stdlib.h>

struct linked {
    int data;
    int sum;
    struct linked *l,*r;
};

struct linked *n1;

struct linked* insert(struct linked *cur,int val)
{
    if(cur==NULL)
    {
        struct linked *new;
        new=(struct linked*)malloc(sizeof(struct linked));
        new->data=val;
        new->sum=val;
        new->l=NULL;
        new->r=NULL;
        return new;
    }
    if(cur->l==NULL)
		cur->sum=0;
	if(cur->r==NULL)
		cur->sum=0;
    else
    {
        if(cur->data<val)
        {
            cur->r=insert(cur->r,val);
            if(cur->l==NULL)
            {
                cur->sum=cur->data+(cur->r->sum);
            }
            if(cur->r==NULL)
            {
                cur->sum=cur->data+(cur->l->sum);
            }
        }
        else
        {
            cur->l=insert(cur->l,val);
            if(cur->l==NULL)
            {
                cur->sum=cur->data+(cur->r->sum);
            }
            if(cur->r==NULL)
            {
                cur->sum=cur->data+(cur->l->sum);
            }
        }
        return cur;
    }

}

void inorder(struct linked *cur)
{
    if(cur==NULL)
        return;
    inorder(cur->l);
    printf("%d %d\n",cur->data,cur->sum);
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
    printf("%d %d\n",cur->data,cur->sum);
}

void preorder(struct linked *cur)
{
    if(cur==NULL)
        return;
    printf("%d %d\n",cur->data,cur->sum);
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
}