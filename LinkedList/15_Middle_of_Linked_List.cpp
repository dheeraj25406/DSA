# LeetCode: https://leetcode.com/problems/middle-of-the-linked-list/
# TC: O(n), SC: O(1) – Single pass using slow & fast pointer

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
    ListNode* middleNode(ListNode* head) {

        if(head==nullptr || head->next == nullptr){
            return head;
        }
    
        ListNode* a=head;
        ListNode* b=head;
        while(b!=nullptr && b->next!=nullptr ){
            a=a->next;
            b=b->next->next;
        }
       
        return a;
        
    }
};
