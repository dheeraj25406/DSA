class Solution {
public:
    long long minimumTime(vector<int>& r, int t) {
        long long l=1,rh=1e18,ans=0;
        while(l<=rh){
            long long m=(l+rh)/2;
            long long c=0;
            for(int i=0;i<r.size();i++){
                c+=m/r[i];
                if(c>=t) break;
            }
            if(c>=t) ans=m,rh=m-1;
            else l=m+1;
        }
        return ans;
    }
};
