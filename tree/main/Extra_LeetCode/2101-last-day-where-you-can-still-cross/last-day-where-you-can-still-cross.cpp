class Solution {
public:
    int latestDayToCross(int r,int c,vector<vector<int>>& cells) {
        int l=1,h=cells.size(),ans=1;
        auto ok=[&](int d){
            vector<vector<int>> g(r,vector<int>(c,0));
            for(int i=0;i<d;i++){
                g[cells[i][0]-1][cells[i][1]-1]=1;
            }
            queue<pair<int,int>> q;
            vector<vector<int>> vis(r,vector<int>(c,0));
            for(int j=0;j<c;j++){
                if(!g[0][j]){
                    q.push({0,j});
                    vis[0][j]=1;
                }
            }
            int dx[4]={1,-1,0,0};
            int dy[4]={0,0,1,-1};
            while(!q.empty()){
                auto p=q.front();q.pop();
                int x=p.first,y=p.second;
                if(x==r-1)return true;
                for(int k=0;k<4;k++){
                    int nx=x+dx[k],ny=y+dy[k];
                    if(nx>=0&&ny>=0&&nx<r&&ny<c&&!g[nx][ny]&&!vis[nx][ny]){
                        vis[nx][ny]=1;
                        q.push({nx,ny});
                    }
                }
            }
            return false;
        };
        while(l<=h){
            int mid=(l+h)/2;
            if(ok(mid))ans=mid,l=mid+1;
            else h=mid-1;
        }
        return ans;
    }
};
