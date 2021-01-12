#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[10001];
void top()
{
	if(top==-1)
		printf("Stack is empty\n");
	printf("%d\n",stack[top]);
}
void push(int item)
{
	top++;
	stack[top]=item;
}
void pop()
{
	if(top==-1)
		printf("Empty\n");
	top--;
}
void display()
{
	if(top==-1)
		printf("Empty Stack\n");
	for(int i=0;i<top;i++)
		printf("%d %d\n",i,stack[i]);
}
int main()
{
	push(10);push(9);push(110);display();pop(9);
}
