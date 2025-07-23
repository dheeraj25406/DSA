// Problem: 66. Plus One  
// Link: https://leetcode.com/problems/plus-one/  
// Time Complexity: O(n)  
// Space Complexity: O(1)  
// Approach: Traverse from back, handle carry case.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1;i>=0;i--){
            if(i==n-1)
                digits[i]++;
            if(digits[i]==10){
                digits[i]=0;
                if(i!=0){
                    digits[i-1]++;
                }
                else{
                    digits.push_back(0);
                    digits[i]=1;
                }
            }
        }
        return digits;
    }


};
