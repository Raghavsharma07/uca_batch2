/*
 * UCA BATCH 2
 * LEETCODE PROBLEM 
 *
 * LINKED LISTS
 * Ques4 - Check palindrome 
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


bool isPalindrome(struct ListNode* head){
    struct ListNode *p=head,*q=head;
    int ct=0;
    while(p!=NULL)
    {
        ct++;
        p=p->next;
    }
    int left=0,right=ct-1,i=0,a[ct];
    while(q!=NULL)
    {
        a[i++]=q->val;
        q=q->next;
    }
    while(left<=right)
    {
        if(a[left]!=a[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;

}
