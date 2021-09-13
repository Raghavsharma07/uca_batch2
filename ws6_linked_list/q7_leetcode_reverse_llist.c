/*
 * UCA BATCH
 * Group 2
 *
 * LEETCODE
 * LINKED LIST
 *
 * Ques 7- Reverse linkedlist between two bounds 
 *
 * @Raghav
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    struct ListNode *pointer1=head,*pointer2,*pointer3=head,*pointer4=head,*pointer5;
    int i;
    if(left>=right)
        return head;
    for(i=0;i<left-1;i++)
    {
        pointer2=pointer1;
        pointer1=pointer1->next;
        pointer3=pointer3->next;
    }
    for(i=0;i<right-1;i++)
    {
        pointer4=pointer4->next;
        pointer5=pointer4->next;
    }
    struct ListNode *q=NULL,*r=NULL;
    while(pointer1!=pointer5)
    {
        r=q;
        q=pointer1;
        pointer1=pointer1->next;

        q->next=r;
    }
    if(left==1)
    {
        pointer3->next=pointer5;
        return q;
    }
    else
    {
        pointer2->next=q;
        pointer3->next=pointer5;
        return head;
    }

}
 
 
