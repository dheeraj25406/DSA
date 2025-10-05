//LC 692
//Approach : Using Heaps
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int,string>> q;
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        for(auto& it:m){
            q.push({-it.second,it.first});
            if(q.size()>k)  q.pop();
        }
        vector<string> ans;
        while(k-- && !q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
