class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bl,vector<vector<int>>& tr){
        int n=bl.size();
        int mx=0;
        for(int i=0;i<n;i++){
            int ax1=bl[i][0];
            int ay1=bl[i][1];
            int ax2=tr[i][0];
            int ay2=tr[i][1];
            for(int j=i+1;j<n;j++){
                int bx1=bl[j][0],by1=bl[j][1];
                int bx2=tr[j][0],by2=tr[j][1];
                int w=min(ax2,bx2)-max(ax1,bx1);
                int h=min(ay2,by2)-max(ay1,by1);
                int side=min(w,h);
                if(side>0)mx=max(mx,side);
            }
        }
        return 1LL*mx*mx;
    }
};