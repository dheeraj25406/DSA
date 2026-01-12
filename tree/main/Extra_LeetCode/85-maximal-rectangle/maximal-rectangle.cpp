class Solution {
public:
    int maximalRectangle(vector<vector<char>>& a) {
        int n=a.size();
        if(n==0)return 0;
        int m=a[0].size(),ans=0;
        vector<int> h(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='1')h[j]++;
                else h[j]=0;
            }
            stack<int> st;
            for(int j=0;j<=m;j++){
                int cur=(j==m?0:h[j]);
                while(!st.empty()&&h[st.top()]>cur){
                    int k=st.top();st.pop();
                    int l=st.empty()? -1:st.top();
                    ans=max(ans,h[k]*(j-l-1));
                }
                st.push(j);
            }
        }
        return ans;
    }
};