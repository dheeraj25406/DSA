class Solution {
public:
    long long maximumProfit(vector<int>& p,int k){
        int n=p.size();
        vector<vector<array<long long,3>>> dp(n,vector<array<long long,3>>(k+1));
        for(int j=1;j<=k;j++){
            dp[0][j][0]=0;
            dp[0][j][1]=-p[0];
            dp[0][j][2]=p[0];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                dp[i][j][0]=max(dp[i-1][j][0],max(dp[i-1][j][1]+p[i],dp[i-1][j][2]-p[i]));
                dp[i][j][1]=max(dp[i-1][j][1],dp[i-1][j-1][0]-p[i]);
                dp[i][j][2]=max(dp[i-1][j][2],dp[i-1][j-1][0]+p[i]);
            }
        }
        return dp[n-1][k][0];
    }
};
