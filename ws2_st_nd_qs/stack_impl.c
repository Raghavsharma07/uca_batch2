//Worksheet 2
// Q1- Stacks implementation
// Uca_batch 2
// @Raghav
#include <stdio.h>

#define size 7
int Stack[size];
int top = -1;

void display()
{
	for(int i=0; i<=top; i++)
	{
		printf("%d ",Stack[i]);
	}
	printf("\n");
}

void push(int ele)
{
	if(top==size-1)
		printf("Stack Full \n");
	else
	{
		top++;
		Stack[top]=ele;
	}


}

int pop()
{
	int x=-1;
	if(top==-1)
		printf("Stack Empty\n");
	else
	{
		x=Stack[top];
		top--;
	}
	return x;
}

int peek()
{
	if(top>=size || top<=-1)
		return -1;
	else
		return Stack[top];
}

int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}


int main()
{
	printf("is Empty ? %d \n",isEmpty());
	push(1);
	display();
	push(2);
	display();
	printf("%d is element at top obtained using peek()\n",peek());
	push(3);
	display();
	push(4);
	display();
	push(5);
	display();
	push(6);
	display();
	push(7);
	display();
	push(8);
	printf("%d is element at top obt using peek()\n",peek());
	printf("Calling pop() functions \n");
	pop();
	display();
	pop();
	display();
	printf("%d is element at top obt using peek()\n",peek());
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	return 0;
}
