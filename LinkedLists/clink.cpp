#include<iostream>
#include<cstddef>

using namespace std;

class Node {
	public:
		int data;
		Node *next;
};
void push(struct Node **ref,int val)
{
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=val;
	new_node->next=(* ref);
	(* ref)=new_node;
}
void append(struct Node **ref,int val)
{
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	struct Node *temp=(* ref);
	new_node->data=val;
	new_node->next=NULL;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node;
}
void print(Node *n)
{
	while(n!=NULL)
	{
		cout << n->data << " ";
		n=n->next;
	}
	cout << "\n" << "";
}
int main(){
	/*
	class Node {
		public:
			int data;
			Node *next;
	};
	*/

	Node *head=NULL;
	head=new Node();
	head->data=1;
	head->next=NULL;
	push(&head,2);
	append(&head,3);
	print(head);
}
