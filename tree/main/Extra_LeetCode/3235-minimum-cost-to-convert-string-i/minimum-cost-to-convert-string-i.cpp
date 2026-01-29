class Solution {
public:
    long long minimumCost(string s, string t, vector<char>& o, vector<char>& c, vector<int>& cost) {
        const long long INF=1e18;
        vector<vector<long long>> d(26,vector<long long>(26,INF));
        for(int i=0;i<26;i++)d[i][i]=0;

        int n=o.size();
        for(int i=0;i<n;i++){
            int a=o[i]-'a',b=c[i]-'a';
            d[a][b]=min(d[a][b],(long long)cost[i]);
        }

        for(int k=0;k<26;k++)
            for(int i=0;i<26;i++)
                for(int j=0;j<26;j++)
                    if(d[i][k]<INF && d[k][j]<INF)
                        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);

        long long ans=0;
        for(int i=0;i<s.size();i++){
            int a=s[i]-'a',b=t[i]-'a';
            if(d[a][b]==INF)return -1;
            ans+=d[a][b];
        }
        return ans;
    }
};