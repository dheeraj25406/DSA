class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int n=s.size(),m=s[0].size(),ans=0;
        vector<int> dp(m,1);
        for(int j=0;j<m;j++){
            for(int i=0;i<j;i++){
                bool ok=1;
                for(int k=0;k<n;k++){
                    if(s[k][i]>s[k][j]){
                        ok=0;
                        break;
                    }
                }
                if(ok)dp[j]=max(dp[j],dp[i]+1);
            }
            ans=max(ans,dp[j]);
        }
        return m-ans;
    }
};