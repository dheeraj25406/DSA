class Solution {
public:
    int countPermutations(vector<int>& a) {
        int n=a.size(),mod=1e9+7;
        long long ans=1;
        for(int i=1;i<n;i++){
            if(a[i]<=a[0])return 0;
            ans=ans*i%mod;
        }
        return ans;
    }
};