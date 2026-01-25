class Solution {
public:
    int minimumDifference(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        int i=0;
        int ans=INT_MAX;
        while(i+k<=n.size()){
            ans=min(ans,n[i+k-1]-n[i]);
            i++;
        }
        return ans;

    }
};