class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& m) {
        long long ans=0;
        int l=1e9;
        int zc=0;
        int cnt=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0)  zc++;
                if(m[i][j]<0){
                    cnt++;
                    m[i][j]*=-1;
                }
                if(m[i][j]<l)   l=m[i][j];
                ans+=m[i][j];
            }
        }
        if(cnt%2!=0 && !zc)    ans-=2*l;
        return ans;
    }
};