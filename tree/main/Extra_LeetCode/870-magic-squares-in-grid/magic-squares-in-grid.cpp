class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& g){
        int n=g.size(),m=g[0].size(),ans=0;
        for(int i=0;i+2<n;i++){
            for(int j=0;j+2<m;j++){
                int c[10]={0};
                for(int x=0;x<3;x++){
                    for(int y=0;y<3;y++){
                        int v=g[i+x][j+y];
                        if(v<1||v>9)c[0]=1;
                        else c[v]++;
                    }
                }
                bool ok=true;
                if(c[0])ok=false;
                for(int v=1;v<=9;v++)if(c[v]!=1)ok=false;
                if(!ok)continue;
                if(g[i][j]+g[i][j+1]+g[i][j+2]!=15)continue;
                if(g[i+1][j]+g[i+1][j+1]+g[i+1][j+2]!=15)continue;
                if(g[i+2][j]+g[i+2][j+1]+g[i+2][j+2]!=15)continue;
                if(g[i][j]+g[i+1][j]+g[i+2][j]!=15)continue;
                if(g[i][j+1]+g[i+1][j+1]+g[i+2][j+1]!=15)continue;
                if(g[i][j+2]+g[i+1][j+2]+g[i+2][j+2]!=15)continue;
                if(g[i][j]+g[i+1][j+1]+g[i+2][j+2]!=15)continue;
                if(g[i][j+2]+g[i+1][j+1]+g[i+2][j]!=15)continue;
                ans++;
            }
        }
        return ans;
    }
};