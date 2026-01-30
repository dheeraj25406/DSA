class Solution {
public:
    long long INF=1e18;
    long long minimumCost(string s,string t,vector<string>& o,vector<string>& c,vector<int>& cost){
        int n=s.size(),id=0;
        unordered_map<string,int> mp;
        for(auto &x:o)if(!mp.count(x))mp[x]=id++;
        for(auto &x:c)if(!mp.count(x))mp[x]=id++;
        
        vector<vector<long long>> d(id,vector<long long>(id,INF));
        for(int i=0;i<id;i++)d[i][i]=0;
        for(int i=0;i<o.size();i++){
            int u=mp[o[i]],v=mp[c[i]];
            d[u][v]=min(d[u][v],(long long)cost[i]);
        }
        
        for(int k=0;k<id;k++)
            for(int i=0;i<id;i++){
                if(d[i][k]==INF)continue;
                for(int j=0;j<id;j++)
                    if(d[k][j]<INF)
                        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        
        vector<long long> dp(n+1,INF);
        dp[n]=0;
        
        vector<int> len;
        for(auto &x:o)len.push_back(x.size());
        sort(len.begin(),len.end());
        len.erase(unique(len.begin(),len.end()),len.end());
        
        for(int i=n-1;i>=0;i--){
            if(s[i]==t[i])dp[i]=dp[i+1];
            for(int l:len){
                if(i+l>n)break;
                string a=s.substr(i,l),b=t.substr(i,l);
                if(!mp.count(a)||!mp.count(b))continue;
                int u=mp[a],v=mp[b];
                if(d[u][v]<INF && dp[i+l]<INF)
                    dp[i]=min(dp[i],d[u][v]+dp[i+l]);
            }
        }
        return dp[0]>=INF?-1:dp[0];
    }
};
