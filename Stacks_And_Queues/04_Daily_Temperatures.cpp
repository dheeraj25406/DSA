// Problem: 739. Daily Temperatures  
// Link: https://leetcode.com/problems/daily-temperatures/  
// Time Complexity: O(n)  
// Space Complexity: O(n)  
// Approach: Use a monotonic decreasing stack to store indices of temperatures. For each temperature, pop from stack until finding a warmer day and compute the number of days waited.


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> v(temperatures.size(),0);
        int k=0;
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                v[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }

        return v;

    }
};
