#include<bits/stdc++.h>

using namespace std;

struct linked {
	int item;
	struct linked *next;
};

struct linked *p;

void insert(struct linked *cur,int val)
{
	struct linked *q;
	q=(struct linked*)malloc(sizeof(struct linked));
	q->item=val;
	q->next=p;

	p=q;
	
}

void display(struct linked *cur)
{
	struct linked *temp;
	temp=(struct linked*)malloc(sizeof(struct linked));
	temp=cur;
	while(temp!=NULL)
	{
		cout << temp->item << endl;
		temp=temp->next;
	}
}
int main()
{

	p=NULL;
	insert(p,10);
	insert(p,20);
	insert(p,30);
	display(p);
}
