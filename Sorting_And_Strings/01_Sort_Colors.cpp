/*Link: Leetcode 75
Time Complexity: O(n)
Space Complexity: O(1)
Approach: Dutch National Flag algorithm*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v(3);
        int j;
        int k;
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        for(j=0;j<v[0];j++){
            nums[j]=0;
        }
        for(k=j;k<j+v[1];k++){
            nums[k]=1;
        }
        for(int l=j+v[1];l<j+v[1]+v[2];l++){
            nums[l]=2;
        }


    }
};
