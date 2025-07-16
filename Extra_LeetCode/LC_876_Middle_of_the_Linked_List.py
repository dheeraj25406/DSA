# LC 876: Middle of the Linked List
# Link: https://leetcode.com/problems/middle-of-the-linked-list/
# Time Complexity: O(n)
# Space Complexity: O(1)

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
