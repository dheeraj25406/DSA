class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.rbegin(),h.rend());
        if(h[0]==0) return 0LL;
        int tmp=0;
        long long ans=0;
        int i=0;
        while(k--){
            if(h[i]<=tmp)   return ans;
            ans+=h[i]-tmp;
            tmp++;
            if(i<h.size()) i++;
        }
        return ans;
    }
};