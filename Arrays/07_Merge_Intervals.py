# Problem: Merge Intervals
# LeetCode: https://leetcode.com/problems/merge-intervals/
# Approach: Sort by start, merge overlapping intervals
# Time Complexity: O(n log n)
# Space Complexity: O(n)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        for (int i=0;i<intervals.size();i++) {
            int start=intervals[i][0];
            int end=intervals[i][1];

            if (v.empty() || v.back()[1]<start) {
                v.push_back({start,end});
            } else {
                v.back()[1] = max(v.back()[1],end);
            }
        }

        return v;
    }
};
