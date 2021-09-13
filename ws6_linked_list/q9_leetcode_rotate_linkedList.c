/*
 * UCA BATCH
 *
 * GROUP - 2
 *
 * LEETCODE PROBLEM - LINKED LIST
 *
 * ques 9 - Rotate linked list 
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


struct ListNode* rotateRight(struct ListNode* head, int k){
    struct ListNode *pointer1=head;
    if(head==NULL || head->next==NULL)
        return head;
    int count=0,i;
    while(pointer1!=NULL)
    {
        pointer1=pointer1->next;
        count++;
    }
    pointer1=head;
    struct ListNode *pointer2;
    for(i=0;i<k%count;i++)
    {
        while(pointer1->next!=NULL)
        {
            pointer2=pointer1;
            pointer1=pointer1->next;
        }
        pointer2->next=NULL;
        pointer1->next=head;
        head=pointer1;
    }
    return head;

}
