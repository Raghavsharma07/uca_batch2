//Uca_batch2
//Circ_queue
//@Raghav

#include <stdio.h>

#define size 5

int cq[size];
int front=0;
int rear=0;

void display()
{
	int i=front+1;
	do{
		printf("%d ",cq[i]);
		i=(i+1)%size;
	}
	while(i!=(rear+1)%size);
	printf("\n");
}
void enqueue(int ele)
{
	if((rear+1)%size == front )
		printf("Queue full\n");
	else
	{
		rear=(rear+1)%size;
		cq[rear]=ele;
	}


}

int dequeue()
{
	int c=-1;
	if(front==rear)
		printf("Queue Empty\n");
	else
	{
		front=(front+1)%size;
		c=cq[front];
	}
	return c;
}

int main()
{
	enqueue(1);
	display();
	enqueue(2);
	display();
	enqueue(3);
	display();
	enqueue(4);
	display();
	enqueue(5);
	dequeue();
	display();
	enqueue(5);
	display();
	return 0;
}
