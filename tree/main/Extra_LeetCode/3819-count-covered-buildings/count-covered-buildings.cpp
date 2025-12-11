class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& b) {
        unordered_map<int,vector<int>> mx,my;
        for(int i=0;i<b.size();i++){
            mx[b[i][0]].push_back(b[i][1]);
            my[b[i][1]].push_back(b[i][0]);
        }
        unordered_map<long long,int> okx,oky;
        for(auto &p:mx){
            auto &v=p.second;
            if(v.size()<3) continue;
            sort(v.begin(),v.end());
            for(int j=1;j+1<v.size();j++){
                long long key=((long long)p.first<<32)|v[j];
                okx[key]=1;
            }
        }
        for(auto &p:my){
            auto &v=p.second;
            if(v.size()<3) continue;
            sort(v.begin(),v.end());
            for(int j=1;j+1<v.size();j++){
                long long key=((long long)v[j]<<32)|p.first;
                oky[key]=1;
            }
        }
        int ans=0;
        for(int i=0;i<b.size();i++){
            long long key=((long long)b[i][0]<<32)|b[i][1];
            if(okx.count(key) && oky.count(key)) ans++;
        }
        return ans;
    }
};
