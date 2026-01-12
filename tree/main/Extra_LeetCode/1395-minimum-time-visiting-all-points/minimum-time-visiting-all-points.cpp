class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& a) {
        int n=a.size(),ans=0;
        for(int j=1;j<n;j++){
            int dx=abs(a[j][0]-a[j-1][0]);
            int dy=abs(a[j][1]-a[j-1][1]);
            ans+=max(dx,dy);
        }
        return ans;
    }
};