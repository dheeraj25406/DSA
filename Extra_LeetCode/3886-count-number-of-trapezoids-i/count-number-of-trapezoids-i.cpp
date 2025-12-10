class Solution {
public:
    int countTrapezoids(vector<vector<int>>& p) {
        unordered_map<int,int> m;
        for(auto &v:p) m[v[1]]++;
        vector<long long> v;
        for(auto &x:m){
            long long c=x.second;
            if(c>=2) v.push_back(c*(c-1)/2);
        }
        sort(v.begin(),v.end());
        long long s=0,ans=0,mod=1000000007;
        for(int i=0;i<v.size();i++){
            ans=(ans+v[i]*s)%mod;
            s=(s+v[i])%mod;
        }
        return ans;
    }
};
