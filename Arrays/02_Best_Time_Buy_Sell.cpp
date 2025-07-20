# Problem: Best Time to Buy and Sell Stock
# LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
# Approach: Track min-so-far and max profit
# Time Complexity: O(n)
# Space Complexity: O(1)



class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int k=0;
        int min=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else{
                int temk=prices[i]-min;
                if(temk>k) k=temk;             
            }
        }
        return k;
        
    }
};
