class Solution {
public:
    int coinChange(vector<int>& c, int a) {
        vector<vector<int>> t(c.size()+1,vector<int>(a+1));
        for(int i=0;i<=a;i++) t[0][i]=-1;
        for(int i=0;i<t.size();i++) t[i][0]=0;
        for(int i=1;i<=c.size();i++){
            for(int j=1;j<=a;j++){
                if(c[i-1]<=j){
                    if(t[i][j-c[i-1]]==-1)  t[i][j]=t[i-1][j];
                    else  if(t[i-1][j]==-1)   t[i][j]=1+t[i][j-c[i-1]];
                    else    t[i][j]=min(1+t[i][j-c[i-1]],t[i-1][j]);
                }
                else    t[i][j]=t[i-1][j];
            }
        }
        return t[c.size()][a];
    }
};