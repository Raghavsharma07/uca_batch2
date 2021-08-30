/*
 *
 * Uca_Batch
 * Group 2
 * Assignment 6 - linked list
 *
 * ques 3
 * Deque using linkedlist
 *
 * 25/08/2021
 * @Raghav 
 * */

/*
Implement a double ended queue (deque). It should perform these operations -
add an element at head, add an element at tail, remove element from head, remove element from tail,
peek head, peek tail, check if given element is present in deque or not.
*/

#include <stdio.h>

#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
}*first=NULL;
 

void display(struct Node *p)
{
	while(p!=NULL)
        {
		printf("%d ",p->data);
		p=p->next;
        }
        printf("\n");
}


void atHead(struct Node *p, int ele)
{
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	struct Node *f=first;
        t->data=ele;
        if(p==NULL)
        {
		first=t;
		first->prev=NULL;
		first->next=NULL;
        }
        else
	{
		f->prev=t;
                t->next=f;
                first=t;
                first->prev=NULL;
        }
}


void atTail(struct Node *p, int ele)
{
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
        t->data=ele;
        if(p==NULL)
        {
		first=t;
		first->prev=NULL;
		first->next=NULL;
        }
        else
	{
		while(p->next!=NULL)
		{
			p=p->next;
                }
        p->next=t;
        t->prev=p;
        t->next=NULL;
        }
}


int remFromhead(struct Node *p)
{
        int x=-1;
        struct Node *f;
        if(p==NULL)
        {
		printf("ALREADY EMPTY !! \n");
        }
	else
	{
		f=first;
		first=first->next;
		first->prev=NULL;
		x=f->data;
                free(f);
        }
        return x;
}

int isPresent(struct Node *p, int ele)
{
	while(p!=NULL)
	{
		if(ele==p->data)
			return 1;
		p=p->next;
        }
        return 0;
}


int remFromTail(struct Node *p)
{
	int x=-1;
        struct Node *q;
        if(p==NULL)
        {
		printf("ALREADY EMPTY !! \n");
        }
        else
        {
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
                }
		x=p->data;
                q->next=NULL;
                free(p);
        }
        return x;
}


int main()
{
        printf("atHead ins 17 \n");
        atHead(first,17);
        display(first);
        printf("atHead ins 6 \n");
        atHead(first,6);
        display(first);
        printf("atHead ins 2 \n");
        atHead(first,2);
        display(first);
        printf("atHead ins 7 \n");
        atHead(first,7);
        display(first);
        printf("atHead ins 1 \n");
        atHead(first,1);
        display(first);
        printf("atTail 18 ins \n");
        atTail(first,18);
        display(first);
        printf("atTail 19 ins \n");
        atTail(first,19);
        display(first);
        printf("%d removed by remFromhead\n",remFromhead(first));
        display(first);
        printf("%d removed by remFromhead\n",remFromhead(first));
        display(first);
        printf("%d removed by remFromTail\n",remFromTail(first));
        display(first);
        printf("isPresent(99) ? %d\n",isPresent(first,99));
        printf("isPresent(6) ? %d\n",isPresent(first,6));

        return 0;
}

