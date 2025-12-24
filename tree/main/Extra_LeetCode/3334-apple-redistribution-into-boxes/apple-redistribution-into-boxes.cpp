class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        long long sm=0;
        for(auto i:a)   sm+=i;
        sort(c.rbegin(),c.rend());
        long long tmp=0;
        int ans=0;
        int e=0;
        while(tmp<sm){
            ans++;
            tmp+=c[e];
            if(e+1<c.size())    e++;
        }
        if(tmp>=sm) return ans;
        return -1;
    }
};