class Solution {
public:
    double separateSquares(vector<vector<int>>& a) {
        int n=a.size();
        double tot=0;
        for(int i=0;i<n;i++)tot+=1.0*a[i][2]*a[i][2];
        double l=1e18,r=0;
        for(int i=0;i<n;i++){
            l=min(l,(double)a[i][1]);
            r=max(r,(double)a[i][1]+a[i][2]);
        }
        double half=tot/2.0;
        for(double eps=1e-5; r-l>eps;){
            double mid=(l+r)/2;
            double area=0;
            for(int i=0;i<n;i++){
                double y=a[i][1],len=a[i][2];
                if(y<mid){
                    area+=len*min(mid-y,len);
                }
            }
            if(area>=half)r=mid;
            else l=mid;
        }
        return r;
    }
};