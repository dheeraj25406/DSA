
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& v) {
        int x=INT_MAX;
        sort(v.begin(),v.end());
        for(int i=0;i+1<v.size();i++)   x=min(x,v[i+1]-v[i]);
        vector<vector<int>> ans;
        for(int i=0;i+1<v.size();i++){
            if(v[i+1]-v[i]==x)  ans.push_back({v[i],v[i+1]});
        }
        return ans;
    }
};