// Problem: 904. Fruit Into Baskets  
// Link: https://leetcode.com/problems/fruit-into-baskets/  
// Time Complexity: O(n)  
// Space Complexity: O(1)  
// Approach: Sliding window with two pointers. Use a map to track count of fruits in the window. Shrink the window when we have more than 2 fruit types.

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans=fruits.size();
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<fruits.size();j++){
                if(baskets[j]>=fruits[i]){
                    baskets[j]=0;
                    ans--;
                    break;
                }

            }
            
        }

        return ans;
        

    }
};
