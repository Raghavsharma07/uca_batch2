/*
 * UCA BATCH
 * GROUP 2
 *
 * LEETCODE PROBLEM
 *
 * LINKED LIST
 *
 * Ques 8- merge two sorted linked lists
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


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1==NULL && l2!=NULL)
        return l2;
    if(l2==NULL && l1!=NULL)
        return l1;
    if(l1==NULL && l2==NULL)
        return NULL;
    struct ListNode *pointer1,*pointer2;
    if(l1->val < l2->val)
    {
        pointer1=pointer2=l1;
        l1=l1->next;
    }
    else
    {
        pointer1=pointer2=l2;
        l2=l2->next;
    }
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->val< l2->val)
        {
            pointer2->next=l1;
            pointer2=l1;
            l1=l1->next;
        }
        else
        {
            pointer2->next=l2;
            pointer2=l2;
            l2=l2->next;
        }

    }
    if(l1==NULL)
        pointer2->next=l2;
    else
        pointer2->next=l1;

    return pointer1;

}
