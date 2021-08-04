//Uca _Batch2
//Worksheet 2
//Q2 - Queue (simple)
//@Raghav

#include<stdio.h>

#define size 7
int Queue[size];
int front=-1;
int rear=-1;

void display()
{
	for(int i=front+1;i<=rear;i++)
	{
		printf("%d ",Queue[i]);
	}
	printf("\n");
}

void enqueue(int ele)
{
	if(rear==size-1)
		printf("Queue full \n ");
	else{
		rear++;
		Queue[rear]=ele;
       	}
}

int dequeue()
{
	int x=-1;
	if(front==rear)
		printf("Queue empty \n ");
	else
	{
		front++;
		x=Queue[front];
	}
        return x;
}

int peek()
{
	if(front>=-1 && front<rear)
		return Queue[front+1];
	else
		return -1;
}

int is_Empty()
{
	if(front==rear)
		return 1;
	else
		return 0;
}
int main()
{

	printf("Queue empty ? %d\n",is_Empty());
        enqueue(1);
	display();
        enqueue(2);
	display();
        enqueue(3);
	display();
        enqueue(4);
	display();
        enqueue(5);
	display();
	printf("Current element at top : %d\n",peek());
        enqueue(6);

	display();
	printf("Queue empty? %d\n",is_Empty());
        enqueue(7);
	display();
        enqueue(8); //queue full
        
        dequeue();
        display();
        dequeue();
        display();
        dequeue();
        display();
	printf("Current element at top : %d \n",peek());
        dequeue();
        display();
	printf("using peek() %d\n",peek());
        dequeue();
        display();
	printf("using peek() %d\n",peek());
        dequeue();
        display();
	printf("using peek() %d\n",peek());
        dequeue();
        display();
	printf("%d\n",peek());
	printf("Queue empty? %d\n",is_Empty());
        dequeue(); //Queue empty
       return 0;
}
