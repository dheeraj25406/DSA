class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& a, int k) {
        int m=a.size(),n=a[0].size();
        vector<vector<int>> ans(m-k+1,vector<int>(n-k+1,0));
        for(int i=0;i+k<=m;i++){
            for(int j=0;j+k<=n;j++){
                vector<int> v;
                for(int x=i;x<i+k;x++){
                    for(int y=j;y<j+k;y++){
                        v.push_back(a[x][y]);
                    }
                }
                sort(v.begin(),v.end());
                int tmp=1e9;
                for(int x=1;x<v.size();x++){
                    if(v[x]!=v[x-1]){
                        tmp=min(tmp,abs(v[x]-v[x-1]));
                    }
                }
                if(tmp==1e9) tmp=0;
                ans[i][j]=tmp;
            }
        }
        return ans;
    }
};