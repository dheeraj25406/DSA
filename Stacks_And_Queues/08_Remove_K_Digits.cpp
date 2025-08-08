// Problem: 402. Remove K Digits  
// Link: https://leetcode.com/problems/remove-k-digits/  
// Time Complexity: O(n)  
// Space Complexity: O(n)  
// Approach: Use a stack (string) to build the smallest possible number. While k > 0 and current digit < top of stack, pop from stack. Append digits and handle leading zeros. Trim final k digits if needed.


class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(int i=0;i<num.size();i++){
            while(k>0 && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int a=0;
        while(a<ans.size() && ans[a]=='0')  a++;
        ans=ans.substr(a);
        return ans.empty()?"0":ans;
        
        
    }
};
