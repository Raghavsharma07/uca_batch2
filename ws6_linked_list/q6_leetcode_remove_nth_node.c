/*
 * LEETCODE PROBLEM
 *Uca Batch 2

 * Ques 6- Remove nth node from the end
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


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
     int count=0,i;
        struct ListNode *pointer1=head,*pointer2;
        while(pointer1!=NULL)
        {
            count++;
            pointer1=pointer1->next;
        }
        int position=count-n;
        pointer1=head;
        if(position==0)
        {
            pointer1=head;
            head=head->next;
            free(pointer1);
        }
        else
        {
            for(i=0;i<position;i++)
            {
                pointer2=pointer1;
                pointer1=pointer1->next;
            }
            pointer2->next=pointer1->next;
            free(pointer1);
        }
        return head;

}
