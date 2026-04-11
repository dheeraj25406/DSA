class Solution {
public:
    int minimumDistance(vector<int>& a) {
        int n=a.size(),ans=1e9;
        unordered_map<int,vector<int>> m;
        for(int j=0;j<n;j++)m[a[j]].push_back(j);
        for(auto &p:m){
            auto &v=p.second;
            if(v.size()<3)continue;
            for(int j=0;j+2<v.size();j++){
                int x=v[j],y=v[j+1],z=v[j+2];
                int d=abs(x-y)+abs(y-z)+abs(z-x);
                ans=min(ans,d);
            }
        }
        return ans==1e9?-1:ans;
    }
};