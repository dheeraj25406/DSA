class Solution {
public:
    int minDeletionSize(vector<string>& a) {
        int n=a.size(),m=a[0].size(),ans=0;
        vector<int> ok(n-1,0);
        for(int j=0;j<m;j++){
            bool bad=0;
            for(int i=0;i<n-1;i++){
                if(!ok[i] && a[i][j]>a[i+1][j]){
                    bad=1;
                    break;
                }
            }
            if(bad){
                ans++;
                continue;
            }
            for(int i=0;i<n-1;i++){
                if(!ok[i] && a[i][j]<a[i+1][j]) ok[i]=1;
            }
        }
        return ans;
    }
};