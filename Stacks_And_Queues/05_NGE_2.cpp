// Problem: 503. Next Greater Element II  
// Link: https://leetcode.com/problems/next-greater-element-ii/  
// Time Complexity: O(n)  
// Space Complexity: O(n)  
// Approach: Use a monotonic stack and simulate a circular array by iterating twice (2n). For each element, check if it's greater than the top of the stack. If yes, it's the next greater for the index at the top. Push indices modulo n.


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,-1);
        stack<int> st;
    
        for(int i=0;i<2*n-1;i++){
            int idx=i%n;
            while(!st.empty() && nums[idx]>nums[st.top()]){
                ans[st.top()]=nums[idx];
                st.pop();
            
            }
            if(i<n) st.push(idx);
        }  
        return ans;      
    }
};
