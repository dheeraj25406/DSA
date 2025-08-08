// Problem: 2073. Time Needed to Buy Ticket  
// Link: https://leetcode.com/problems/time-needed-to-buy-tickets/  
// Time Complexity: O(n)  
// Space Complexity: O(1)  
// Approach: Iterate through the array and simulate the process. For every person, if their index is less than or equal to `k`, count min(tickets[i], tickets[k]), else count min(tickets[i], tickets[k] - 1).


class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        for(int i=0;i<tickets.size();i++){
            q.push({i,tickets[i]});
        }

        int ans=0;
        while(!q.empty()){
            auto [index,count]=q.front();
            q.pop();
            count--;
            ans++;
        
        if(count>0){
            q.push({index,count});
        }
        
        if(index==k && count==0){
            return ans;
        }
        }
        return 0;
        
    }
};
