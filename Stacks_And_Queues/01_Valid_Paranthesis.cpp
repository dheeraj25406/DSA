// Problem: 20. Valid Parentheses  
// Link: https://leetcode.com/problems/valid-parentheses/  
// Time Complexity: O(n)  
// Space Complexity: O(n)  
// Approach: Use a stack to track opening brackets. For every closing bracket, check if it matches the top of the stack.

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')   st.push('(');
            else if(s[i]=='{')   st.push('{');
            else if(s[i]=='[')   st.push('[');
            else if(s[i]=='}'){
                if(st.size()>=1 && st.top()=='{')    st.pop();
                else    return false;
            }
            else if(s[i]==')'){
                if(st.size()>=1 && st.top()=='(')    st.pop();
                else    return false;
            }
            else if(s[i]==']'){
                if(st.size()>=1 && st.top()=='[')    st.pop();
                else    return false;
            }
        }
        if(st.empty())  return true;
        return false;
    }
};
