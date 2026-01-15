class Solution {
public:
    int maximizeSquareHoleArea(int n,int m,vector<int>& h,vector<int>& v) {
        auto g=[&](vector<int>& a){
            if(a.empty()){
                return 1;
            }
            sort(a.begin(),a.end());
            int mx=1;
            int c=1;
            for(int i=1;i<a.size();i++){
                if(a[i]==a[i-1]+1)  c++;
                else c=1;
                mx=max(mx,c);
            }
            return mx+1;
        };
        int x=g(h),y=g(v);
        int s=min(x,y);
        return s*s;
    }
};