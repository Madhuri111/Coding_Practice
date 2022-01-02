#include<stdio.h>
#include<stdlib.h>

struct linked
{
    int val;
    struct linked *l,*r;
    int sum;
}

struct linked *n1;

struct linked* insert(struct linked *cur,int val)
{
    if(cur==NULL)
    {
        struct linked *new;
        new=(struct linked *)malloc(sizeof(struct linked));
        new->l=NULL;
        new->r=NULL;
        new->val=val;
        new->sum=val;
        return new;

    }
    if(cur->l==NULL)
    {
        cur->sum=0;
    }

    if(cur->r==NULL)
    {
        cur->sum=0;
    }
    else
    {
        if(val>cur->val)
        {
            cur->r=insert(cur->r,val);
            if(cur->l==NULL)
                                cur->sum=cur->value+(cur->r->sum);
            if(cur->r==NULL)
                                cur->sum=cur->value+(cur->l->sum);


        }
        else{
            cur->l=insert(cur->l,val);
            if(cur->l==NULL)
                                cur->sum=cur->value+(cur->r->sum);
            if(cur->r==NULL)
                                cur->sum=cur->value+(cur->l->sum);

        }
        return cur;
    }
}


//

MAX DEPTH

int maxDepth(node* node)
{
    if (node == NULL)
        return -1;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
     
        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}
int main()
{
    int n;
    cin >> n;
    n1=NULL;
    for(int i=0;i<n;i++)
    {
        int g;
        cin >> g;
        n1=insert(n1,g);
    }

}