class Solution {
public:
    int specialTriplets(vector<int>& n) {
        int s=n.size();
        unordered_map<int,int> m;
        m.reserve(s);
        for(int i=0;i<n.size();i++) m[n[i]]++;
        long long ans=0;
        const int mod=1e9+7;
        unordered_map<int,int> q;
        q.reserve(s);
        for(int i=0;i<n.size();i++){
            int d=2*n[i];
            int pc=q[d];
            int fc=m[d]-pc;
            if(n[i]==0)    fc--;
            ans=(ans+(pc*1LL*fc)%mod)%mod;
            q[n[i]]++;
            }
        return ans;
    } 
};