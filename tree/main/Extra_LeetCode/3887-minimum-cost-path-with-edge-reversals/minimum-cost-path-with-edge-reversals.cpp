class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> g(n);
        for(auto &e:edges){
            int u=e[0],v=e[1],w=e[2];
            g[u].push_back({v,w});
            g[v].push_back({u,2*w});
        }
        const long long INF=LLONG_MAX/4;
        vector<long long> dist(n,INF);
        dist[0]=0;
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>pq;
        pq.push({0,0});
        while(!pq.empty()){
            auto [d,u]=pq.top();pq.pop();
            if(d>dist[u])continue;
            if(u==n-1)return d;
            for(auto &pr:g[u]){
                int v=pr.first; long long w=pr.second;
                long long nd=d+w;
                if(nd<dist[v]){
                    dist[v]=nd;
                    pq.push({nd,v});
                }
            }
        }
        return -1;
    }
};
