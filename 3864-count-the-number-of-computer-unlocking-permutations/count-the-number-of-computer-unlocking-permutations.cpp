class Solution {
public:
    const int mod=1e9+7;
    long long fact(long long n){
        if(n==0)    return 1LL;
        else    return n*(fact(n-1)%mod)%mod;
        ;
    }
    int countPermutations(vector<int>& c) {
        unordered_map<long long,int> m;
        for(int i=0;i<c.size();i++) m[c[i]]++;
        long long a=c[0];
        long long ans=0;
        for(int i=1;i<c.size();i++) if(c[i]<=a) return 0;
        ans=fact(c.size()-1);
        return ans;
    }
};