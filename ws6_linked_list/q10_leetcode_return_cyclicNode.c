/*
 * UCA BATCH - GROUP 2
 *
 * LEETCODE PROBLEM
 *
 * LINKED LIST
 *
 * ques 10 - return position of cyclic node if present
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

int check_Cycle(struct ListNode *p)
{
    if(p==NULL)
        return 0;
    if(p!=NULL && p->next==NULL)
        return 0;
    //if(p!=NULL && p->next==p)
      //  return 1;
    struct ListNode *slow=p,*fast=p;
    
    do{
        slow=slow->next;
        fast=fast->next;
        fast=fast==NULL?fast:fast->next;
    }while(slow!=NULL && fast!=NULL && fast!=slow);
    if(fast==slow)
        return 1;
    else
        return 0;
}

struct ListNode *position(struct ListNode *p)
{
    struct ListNode *slow=p,*fast=p;
    
    do{
        slow=slow->next;
        fast=fast->next;
        fast=fast==NULL?fast:fast->next;
    }while(fast!=slow);
    fast=p;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
   return slow;
}
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p=head;
    if(check_Cycle(p)==0)
        return 0;
    else
        return position(p);
    
    
}
