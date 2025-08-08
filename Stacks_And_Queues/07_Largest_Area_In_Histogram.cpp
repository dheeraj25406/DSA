// Problem: 84. Largest Rectangle in Histogram  
// Link: https://leetcode.com/problems/largest-rectangle-in-histogram/  
// Time Complexity: O(n)  
// Space Complexity: O(n)  
// Approach: Use a monotonic stack to keep indices of increasing bars. For each bar, pop from the stack when the current height is less than the top, and compute area. Push the current index after processing.

class Solution {
public:

    vector<int> nse(vector<int> &heights,int n){
        vector<int> ans(n,n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int idx=st.top();
                st.pop();
                ans[idx]=i;
            }
            st.push(i);
        }

        return ans;
    }
    vector<int> pse(vector<int> &heights,int n){
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int idx=st.top();
                st.pop();
                ans[idx]=i;
            }
            st.push(i);
        }

        return ans;

    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nxt(n);
        nxt=nse(heights,n);
        vector<int> pre;
        pre=pse(heights,n);
        int area=0;
        
        for(int i=0;i<n;i++){
            int l=heights[i],b=nxt[i]-pre[i]-1, temp=l*b;
            if(temp>area)   area=temp;
        }
        return area;

    }
};
