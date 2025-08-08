// Problem: 933. Number of Recent Calls  
// Link: https://leetcode.com/problems/number-of-recent-calls/  
// Time Complexity: O(1) amortized per ping, O(n) worst-case when popping expired pings  
// Space Complexity: O(n)  
// Approach: Use a queue to store the timestamps. On each ping, push the current time and pop from the front while the time is outside the 3000ms window. Return queue size.


class RecentCounter {
    queue<int> q;
public:
    RecentCounter() {}
    int ping(int t) {
        q.push(t);
        while(!q.empty() && q.front()<t-3000)   q.pop();
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
