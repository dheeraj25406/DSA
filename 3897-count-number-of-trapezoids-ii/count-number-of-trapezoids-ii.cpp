class Solution {
public:
    int countTrapezoids(vector<vector<int>>& p){
        int n=p.size();
        unordered_map<int,unordered_map<int,int>> t,v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int dx=p[j][0]-p[i][0],dy=p[j][1]-p[i][1];
                if(dx<0||(dx==0&&dy<0))dx=-dx,dy=-dy;
                int g=gcd(dx,abs(dy));
                int sx=dx/g,sy=dy/g;
                int des=sx*p[i][1]-sy*p[i][0];
                int k1=(sx<<12)|(sy+2000);
                int k2=(dx<<12)|(dy+2000);
                t[k1][des]++; 
                v[k2][des]++;
            }
        }
        return cnt(t)-cnt(v)/2;
    }

    int cnt(unordered_map<int,unordered_map<int,int>>& mp){
        long long ans=0;
        for(auto &p:mp){
            auto &m=p.second;
            long long s=0;
            for(auto &q:m)s+=q.second;
            for(auto &q:m)ans+=q.second*(s-=q.second);
        }
        return ans;
    }
};
