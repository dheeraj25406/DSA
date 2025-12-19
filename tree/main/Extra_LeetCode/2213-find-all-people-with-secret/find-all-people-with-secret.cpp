class Solution {
public:
    vector<int> findAllPeople(int n,vector<vector<int>>& m,int f){
        vector<vector<pair<int,int>>> g(n);
        for(auto &v:m){
            g[v[0]].push_back({v[1],v[2]});
            g[v[1]].push_back({v[0],v[2]});
        }
        vector<int> t(n,1e9);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        t[0]=0;
        t[f]=0;
        pq.push({0,0});
        pq.push({0,f});
        while(!pq.empty()){
            auto [ti,u]=pq.top();pq.pop();
            if(ti>t[u])continue;
            for(auto &p:g[u]){
                int v=p.first,nt=p.second;
                if(nt>=ti && nt<t[v]){
                    t[v]=nt;
                    pq.push({nt,v});
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++)if(t[i]!=1e9)ans.push_back(i);
        return ans;
    }
};
