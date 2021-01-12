#include<stdio.h>
#include<stdlib.h>
int front=0,rear=0;
int q[10001];
void push(int item)
{
	q[rear]=item;
	rear++;
}
int top()
{
	return q[rear-1];
}
void pop()
{
	printf("%d popped\n",q[front]);
	front++;
}
void display()
{
	printf("Elements\n");
	for(int i=front;i<rear;i++)
		printf("%d\n",q[i]);
}
int main()
{
	push(9);
	push(100);
	push(0);
	display();
	pop();
	display();
	printf("%d--is top\n",top());
	printf("Size is %d\n",(rear-1)-front+1);
}
