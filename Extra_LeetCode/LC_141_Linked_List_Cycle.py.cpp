# LC 141: Linked List Cycle
# Link: https://leetcode.com/problems/linked-list-cycle/
# Time Complexity: O(n)
# Space Complexity: O(1)

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
