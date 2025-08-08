// Problem: 496. Next Greater Element I  
// Link: https://leetcode.com/problems/next-greater-element-i/  
// Time Complexity: O(n + m) where n = nums1.size(), m = nums2.size()  
// Space Complexity: O(m)  
// Approach: Use a monotonic decreasing stack to precompute next greater elements for nums2, then map results for nums1 using a hashmap.


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && st.top()<nums2[i]){
                m.insert({st.top(),nums2[i]});
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            m.insert({st.top(),-1});
            st.pop();
        }

        for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }
};
