/*
 * UCA BATCH - 2
 * LEETCODE PROBLEM 
 *
 * Ques 5 - Remove duplicates from a sorted linked list
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


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *temp=(struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *cur=head,*prev;
    temp->next=head;
    prev=temp;
    while(cur!=NULL)
    {
        while(cur->next!=NULL  && cur->val==cur->next->val)//keep moving cur until next element not equal
            cur=cur->next;
        if(prev->next==cur) //no duplicate
            prev=prev->next;
        else
            prev->next=cur->next; //duplicates found
        cur=cur->next; //iterate cur
    }
    return temp->next;


}
