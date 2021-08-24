/*
 *
 * Worksheet - 6
 * Uca_Batch
 * Group - 2
 *
 * ques2
 * Queue using linked list
 *
 * 24/08/2021
 * @Raghav
 * */

#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;
        struct Node *next;
}*first=NULL,*second=NULL;


void display(struct Node *p)
{
	while(p!=NULL)
        {
		printf("%d ",p->data);
                p=p->next;
        }
        printf("\n");
}


void enqueue(struct Node *p, int n)
{
	struct Node *t=(struct Node *)malloc(sizeof(struct Node));
        t->data=n;
        t->next=NULL;
        if(first==NULL)
	{
		first=t;
        }
	else
        {
		while(p->next!=NULL)
		{
			p=p->next;
                }
		p->next=t;
		p=t;
        }

}


int isEmpty(struct Node *p)
{
	if(p==NULL)
		return 1;
	else
		return 0;
}


int peek(struct Node *p)
{
	if(p)
		return p->data;
	else
		return -1;
}


int dequeue(struct Node *p)
{
	int x=-1;
        struct Node *p1;
        if(isEmpty(p))
        {
		printf("QUEUE EMPTY!!\n");
        }
        else
	{
		p1=first;
		first=first->next;
                x=p1->data;
                free(p1);
        }
	return x;
}

int main()
{
        printf("isEmpty ? %d\n",isEmpty(first));
        enqueue(first,1);
        printf("enqueue(1)\n");
        display(first);
        enqueue(first,5);
        printf("enqueue(5)\n");
        display(first);
        enqueue(first,7);
        printf("enqueue(7)\n");
        display(first);
        printf("isEmpty ? %d\n",isEmpty(first));
        printf("enqueue(11)\n");
        enqueue(first,11);
        display(first);
        enqueue(first,15);
        printf("enqueue(15)\n");
        display(first);
        printf("%d dequeued\n",dequeue(first));
        display(first);
        printf("%d dequeued\n",dequeue(first));
        display(first);
        printf("peek : %d\n",peek(first));
        printf("%d dequeued\n",dequeue(first));
        display(first);
        printf("%d dequeued\n",dequeue(first));
        display(first);
        printf("%d dequeued\n",dequeue(first));
        display(first);
        printf("%d dequeued\n",dequeue(first));
        display(first);
	
	return 0;
}

