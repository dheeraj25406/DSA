// Problem: 735. Asteroid Collision  
// Link: https://leetcode.com/problems/asteroid-collision/  
// Time Complexity: O(n)  
// Space Complexity: O(n)  
// Approach: Use a stack to simulate the collisions. Push positive asteroids. For negative ones, pop all smaller positive asteroids; if equal, pop and break; if all are smaller, push the negative one.


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int i=0;i<asteroids.size();i++){
            bool temp = false;
            while(!st.empty() && asteroids[i]<0 && st.top()>0){
                if(abs(asteroids[i])>st.top()){
                    st.pop();
                    continue;
                }
                else if(abs(asteroids[i])==st.top()){
                    st.pop();
                    temp=true;
                    break;
                }
                else{
                    temp=true;
                    break;
                }
            }
            if(!temp)   st.push(asteroids[i]);  
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
