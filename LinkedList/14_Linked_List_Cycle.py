# LeetCode: https://leetcode.com/problems/linked-list-cycle/
# TC: O(n), SC: O(1) – Using Floyd’s cycle detection (slow & fast pointers)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* a=head;
        ListNode* b=head;

        while(b!=nullptr && b->next!=nullptr){
            a=a->next;
            b=b->next->next;
            if(a==b){
                return true;
            }

        }
        return false;
        
    }
};
