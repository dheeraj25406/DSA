//LC 973
//Approach : Priority queue 
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> p;
        for(auto& i:points){
            int e=i[0]*i[0]+i[1]*i[1];
            p.push({e,i});
            if(p.size()>k)  p.pop();
        }
        vector<vector<int>> ans;
        while(!p.empty() && k--){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;   
    }
};
