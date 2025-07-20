// Problem: 234. Palindrome Linked List  
// Link: https://leetcode.com/problems/palindrome-linked-list/  
// Time Complexity: O(n)  
// Space Complexity: O(1)  
// Approach: Find middle → reverse second half → compare both halves

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* revers(ListNode* h){
        if(h==NULL || h->next==NULL){
            return h;
        }
        ListNode* ch=revers(h->next);
        h->next->next=h;
        h->next=NULL;

        return ch;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* a=head;
        ListNode* b=head;
        ListNode* c=head;
        while(b!=NULL && b->next!=NULL){
            a=a->next;
            b=b->next->next;
        }
        ListNode* d=revers(a);

        while(d!=NULL){
            if(c->val!=d->val)  return false;
            c=c->next;
            d=d->next;
        }
        return true;


    }
};
