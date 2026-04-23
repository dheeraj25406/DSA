typedef long long ll;
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<ll> ans(n);
        unordered_map<int,pair<ll,ll>> pref, suff;

        for(int i=0; i<n; i++) 
        {
            if(suff.find(nums[i])!=suff.end()) 
            {
                pair<ll,ll> prev = suff[nums[i]];
                suff[nums[i]] = {prev.first+i, prev.second+1};
            }
            else suff[nums[i]] = {i, 1};
        }

        for(int i=0; i<n; i++)
        {
            if(suff.find(nums[i])!=suff.end())
            {
                pair<ll,ll> val = suff[nums[i]];
                suff[nums[i]] = {val.first-i, val.second-1};
                val = suff[nums[i]];
                if(val.second) ans[i] += val.first-(i*1LL*val.second);
            }
            if(pref.find(nums[i])!=pref.end())
            {
                pair<ll,ll> val = pref[nums[i]];
                if(val.second) ans[i] += (i*1LL*val.second)-val.first;
                pref[nums[i]] = {val.first+i, val.second+1};
            }
            else pref[nums[i]] = {i, 1};
        }
        return ans;
    }
};