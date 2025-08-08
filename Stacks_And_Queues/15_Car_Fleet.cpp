// Problem: 853. Car Fleet  
// Link: https://leetcode.com/problems/car-fleet/  
// Time Complexity: O(n log n) (due to sorting by position)  
// Space Complexity: O(n)  
// Approach: Sort cars by position in descending order. For each car, compute time to reach target. Use a stack to track fleets. If the current car takes more time than the car ahead, it forms a new fleet.


class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) { 
        if(speed.size()==1) return 1;
        vector<pair<int,double>>v;
        for(int i=0;i<speed.size();i++){
            double time=(double)(target-position[i])/speed[i];
            v.push_back({position[i],time});
        }
        sort(v.rbegin(),v.rend());
        int ans=0;
        double tem=0;
        for(int i=0;i<v.size();i++){
            if(v[i].second>tem){
                ans++;
                tem=v[i].second;
            }
        }
        return ans;
    }
};
