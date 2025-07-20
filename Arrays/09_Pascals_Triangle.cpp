# Q9: Pascal’s Triangle
# LeetCode: https://leetcode.com/problems/pascals-triangle/
# Time Complexity: O(numRows^2)
# Space Complexity: O(numRows^2)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans={{1}};
        if(numRows==1)  return ans;
        ans.push_back({1,1});
        if(numRows==2) return ans;

        for(int i=0;i<numRows-2;i++){
            vector<int> arr=ans.back();
            vector<int> temp{1};
            for(int j=0;j<arr.size()-1;j++){
                int c=arr[j]+arr[j+1];
                temp.push_back(c);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }

        return ans;
        
    }
};
