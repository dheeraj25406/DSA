// Problem: 19. Remove Nth Node From End of List  
// Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/  
// Time Complexity: O(n)  
// Space Complexity: O(1)  
// Approach: Two pointer technique – move second pointer `n` steps ahead, then move both until end.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=n;
        ListNode* i=head;
        ListNode* j=head;
        while(c>0){
            j=j->next;
            c--;
        }
        if(j==NULL){
            head=head->next;
            return head;
        }

        while(j!=NULL && j->next!=NULL){
            j=j->next;
            i=i->next;

        }
        i->next=i->next->next;

        return head;
    }
};
