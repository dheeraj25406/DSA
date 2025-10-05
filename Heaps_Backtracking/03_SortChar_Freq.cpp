//LC 451
//Approach : Heaps
class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> q;
        unordered_map<char,int> m;
        for(auto i:s)   m[i]++;
        for(auto& it:m) q.push({it.second,it.first});
        string ans;
        while(!q.empty()){
            auto t=q.top();
            q.pop();
            ans.append(t.first,t.second);
        }
        return ans;

    }
};
