class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        priority_queue<int,vector<int>,greater<int>> free;
        for(int i=0;i<n;i++)free.push(i);
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> busy;
        vector<long long> c(n,0);
        for(auto &p:a){
            long long s=p[0],e=p[1];
            while(!busy.empty() && busy.top().first<=s){
                free.push(busy.top().second);
                busy.pop();
            }
            if(!free.empty()){
                int r=free.top();free.pop();
                c[r]++;
                busy.push({e,r});
            }else{
                auto t=busy.top();busy.pop();
                long long ns=t.first+(e-s);
                int r=t.second;
                c[r]++;
                busy.push({ns,r});
            }
        }
        int ans=0;
        for(int i=1;i<n;i++)if(c[i]>c[ans])ans=i;
        return ans;
    }
};
