// Problem: 856. Score of Parentheses  
// Link: https://leetcode.com/problems/score-of-parentheses/  
// Time Complexity: O(n)  
// Space Complexity: O(n)  
// Approach: Use a stack to keep track of scores. Push 0 for `(`. On `)`, pop until you get the last `(` score, calculate current score as `2 * inner` or `1` if empty. Add it back to stack.

class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0;
        int count = 0;
        
        for(int i=0; i<s.length()-1; i++){
            if(s[i] == '(' && s[i+1] == ')'){
                ans += pow(2,  count);
                i++;
            } else if(s[i] == '(') {
                count++;
            } else {
                count--;
            }
        }
        
        return ans;
    }
};
