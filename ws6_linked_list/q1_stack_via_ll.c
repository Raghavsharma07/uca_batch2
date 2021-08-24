/*
 *
 * Worksheet - 6
 * Uca_Batch
 * Group - 2
 *
 * ques1
 * Stack using linked list
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


void push(struct Node *p, int data)
{
	struct Node *t=(struct Node *)malloc(sizeof(struct Node));
        t->data=data;
        if(p==NULL)
        {
		t->next=NULL;
		first=t;
        }
        else
        {
                t->next=first;
		first=t;
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


int pop(struct Node *p)
{
	int x=-1;
	if(isEmpty(p))
        {
		printf("STACK EMPTY!!!\n");
	}
	else
	{
		struct Node *p=first;
		first=first->next;
		x=p->data;
                free(p);
        }
        return x;
}


int main()
{
    
        printf("Initially Empty? %d\n",isEmpty(first));
        printf("push(4) \n");
        push(first,4);
        display(first);
        push(first, 3);
        printf("push(3): \n");
        display(first);
        push(first, 13);
        printf("push(13): \n");
        display(first);
        printf("push(21): \n");
        push(first, 21);
        display(first);
        printf("push(2): \n");
     
        push(first, 2);
        display(first);
        printf("PEEK : \n");
        printf("%d \n",peek(first));
        printf("%d popped out\n",pop(first));
        display(first);
        printf("%d popped out\n",pop(first));
        display(first);
    
        printf("isEmpty ? %d \n",isEmpty(first));
        printf("%d popped out\n",pop(first));
        display(first);
        printf("%d popped out\n",pop(first));
        display(first);
        printf("%d popped out\n",pop(first));
        display(first);
        printf("%d popped out\n",pop(first));
        display(first);
        printf("isEmpty ? %d \n",isEmpty(first));

       return 0;
}

