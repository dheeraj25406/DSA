//LC 347
//Approach : Using priority queue
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> q;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }        
        for(auto& [num,cnt]:m){
            q.push({cnt,num});
        }
        vector<int> ans;
        while(k-- && !q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;

    }
};
