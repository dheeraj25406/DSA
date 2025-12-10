class Solution {
public:
    int numMusicPlaylists(int n,int goal,int k) {
        const long long mod=1e9+7;
        vector<vector<long long>> dp(goal+1,vector<long long>(n+1,0));
        dp[0][0]=1;
        for(int i=1;i<=goal;i++){
            for(int j=1;j<=n;j++){
                long long a=dp[i-1][j-1]*(n-(j-1))%mod;
                long long b=0;
                if(j>k)b=dp[i-1][j]*(j-k)%mod;
                dp[i][j]=(a+b)%mod;
            }
        }
        return dp[goal][n];
    }
};
