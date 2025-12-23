class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& e) {
        int n=e.size(),ans=0;
        sort(e.begin(),e.end());
        vector<int> suf(n+1,0);
        for(int i=n-1;i>=0;i--)suf[i]=max(suf[i+1],e[i][2]);
        for(int i=0;i<n;i++){
            int l=i+1,r=n;
            while(l<r){
                int m=(l+r)/2;
                if(e[m][0]>e[i][1])r=m;
                else l=m+1;
            }
            ans=max(ans,e[i][2]+suf[l]);
        }
        return ans;
    }
};
