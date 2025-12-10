class Solution {
public:
    long long countArrays(vector<int>& a, vector<vector<int>>& b) {
        int n=a.size();
        long long mn=b[0][0],mx=b[0][1];
        for(int i=1;i<n;i++){
            long long d=a[i]-a[i-1];
            mn=max(mn+d,(long long)b[i][0]);
            mx=min(mx+d,(long long)b[i][1]);
            if(mn>mx)return 0;
        }
        return mx-mn+1;
    }
};
