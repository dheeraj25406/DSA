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
    int pairSum(ListNode* head) {
        ListNode* tmp=head;
        vector<int> v;
        while(tmp!=NULL){
            v.push_back(tmp->val);
            tmp=tmp->next;
        }
        int ans=0;
        int j=v.size()-1;
        for(int i=0;i<=v.size()/2-1;i++){
            ans=max(ans,v[i]+v[j]);
            j--;
        }
        return ans;
    }
};