class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        for(int i=0;i<a.size();i++){
            bool tmp=false;
            while(!st.empty() && a[i]<0 && st.top()>0){
                if(abs(a[i])>st.top()){
                    st.pop();
                    continue;
                }
                else if(abs(a[i])==st.top()){
                    st.pop();
                    tmp=true;
                    break;
                }
                else{
                    tmp=true;
                    break;
                }

            }
            if(!tmp)    st.push(a[i]);
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