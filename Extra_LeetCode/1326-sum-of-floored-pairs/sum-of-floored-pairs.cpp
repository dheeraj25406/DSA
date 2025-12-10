class Solution {
public:
    int sumOfFlooredPairs(vector<int>& a) {
        int n=a.size(),mx=0;
        for(int &x:a)mx=max(mx,x);
        vector<int> f(mx+1);
        for(int &x:a)f[x]++;
        vector<int> pre(mx+1);
        for(int i=1;i<=mx;i++)pre[i]=pre[i-1]+f[i];
        long long ans=0,mod=1e9+7;
        for(int x=1;x<=mx;x++){
            if(!f[x])continue;
            for(int j=x;j<=mx;j+=x){
                int l=j,r=min(j+x-1,mx);
                int cnt=pre[r]-pre[l-1];
                ans=(ans+(long long)f[x]*cnt*(j/x))%mod;
            }
        }
        return ans;
    }
};
