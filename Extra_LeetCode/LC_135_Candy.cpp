# Problem: Candy
# LeetCode: https://leetcode.com/problems/candy/
# Approach: Two-pass greedy (left to right, right to left)
# Time Complexity: O(n)
# Space Complexity: O(n)

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int> candy(n , 1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1])candy[i]=max(candy[i],candy[i-1]+1);
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])candy[i]=max(candy[i],candy[i+1]+1);
        }
        int sum=0;
        for(int j=0;j<candy.size();j++){
            sum+=candy[j];

        }
        return sum;
        
    }
};
