class Solution {
public:
    int countCollisions(string d) {
        stack<char> st;
        int ans=0;
        for(int i=0;i<d.size();i++){
            char c=d[i];
            if(c=='R'){
                st.push('R');
            }else if(c=='S'){
                while(!st.empty() && st.top()=='R'){ans++;st.pop();}
                st.push('S');
            }else{
                if(st.empty() || st.top()=='L'){
                    st.push('L');
                }else if(st.top()=='S'){
                    ans++;
                    st.push('S');
                }else{
                    int k=0;
                    while(!st.empty() && st.top()=='R'){k++;st.pop();}
                    ans+=k+1;
                    st.push('S');
                }
            }
        }
        return ans;
    }
};
