// Problem: 1700. Number of Students Unable to Eat Lunch  
// Link: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/  
// Time Complexity: O(n²) in worst-case if students keep rotating  
// Space Complexity: O(n)  
// Approach: Use two queues — one for students and one for sandwiches. While student at front doesn't want the current sandwich, rotate them to back. If no one wants the current sandwich, break and return count.


class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> st;
        queue<int> sa;
        int cnt=0,n=students.size();
        for(int i=0;i<students.size();i++){
            st.push(students[i]);
            sa.push(sandwiches[i]);
        }
        while(!st.empty() && cnt<st.size()){
            if(st.front()==sa.front()){
                st.pop();
                sa.pop();
                cnt=0;
            }
            else{
                st.push(st.front());
                st.pop();
                cnt++;
            }
        }
        return st.size();
    }
};
