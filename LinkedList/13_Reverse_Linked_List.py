# LeetCode: https://leetcode.com/problems/reverse-linked-list/
# TC: O(n) – one pass through the list
# SC: O(1) – reversing in-place

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
    ListNode* reverseList(ListNode* head) {

        return revers(head);
        
    }
};
