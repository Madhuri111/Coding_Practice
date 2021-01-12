#include<stdio.h>
#include<stdlib.h>

struct linked {
    int item;
    struct linked *link;
};

struct linked *p;

void delete(int item)
{
	struct linked *q1=p->link,*q2=p;
	if(q2->item==item)
	{
		p=q1;
		free(q2);
	}
	else
	{
		while(q1!=NULL)
		{
			if(q1->item==item)
			{
				q2->link=q1->link;
				free(q1);
				break;
			}
			else
			{
				q1=q1->link;
				q2=q2->link;
			}
		}
	}
}
void display()
{
    struct linked *q;
    q=(struct linked*)malloc(sizeof(struct linked));
    q=p;
    while(q!=NULL)
    {
        printf("%d\n",q->item);
        q=q->link;
    }
    printf("\n");
}

void inserts(int item)
{
    struct linked *q;
    q=(struct linked*)malloc(sizeof(struct linked));   
    q->item=item;
    q->link=p;
    p=q;
}


void insertd(int item)
{
    struct linked *q;
    q=(struct linked*)malloc(sizeof(struct linked));   
    struct linked *temp;
    temp=(struct linked*)malloc(sizeof(struct linked));   
    temp=p;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    q->item=item;
    q->link=NULL;
    temp->link=q;
}

int main()
{
    p=NULL;
    inserts(10);
    inserts(20);
    insertd(30);
    display();
    delete(20);
    display();
}
