#include<stdio.h>
#include <stdlib.h>
#define max 10
int stack[max];
int top=-1;
void push(int x)
{
	if(top==max-1)
	{
		printf("stack is overflow\n");
	}
	else
	{
		stack[++top]=x;
		printf("push iteam=%d\n",stack[top]);
	}
}
int pop()
{
	int data;
	if(top==-1)
	{
		printf("stack is empty\n");
		return NULL;
	}
	else
	{
		data=stack[top];
		top=top-1;
		return data;
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	int ch,n,d;
	char c;
	do
	{
		printf("1.push iteam\n");
		printf("2.pop iteam\n");
		printf("3.display iteam\n");
		printf("4.exit the program\n");
		printf("enter the choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the iteam of stack\n");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				d=pop();
				printf("delete iteam=%d\n",d);
				break;
			case 3:
				display();
				break;
			case 4:
				exit (0);
		}
	}
	while(ch!=4);
	return 0;
}


















