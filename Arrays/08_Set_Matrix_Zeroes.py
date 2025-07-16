# Q8: Set Matrix Zeroes
# LeetCode: https://leetcode.com/problems/set-matrix-zeroes/
# Time Complexity: O(m * n)
# Space Complexity: O(1) — using first row and column as markers

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> vi,vj;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    vi.push_back(i);
                    vj.push_back(j);
                }
            }
        }
        for(int i=0;i<vi.size();i++){
                for(int j=0;j<matrix[0].size();j++)  matrix[vi[i]][j]=0;
            }
        
        for(int k=0;k<vj.size();k++){
                for(int i=0;i<matrix.size();i++)  matrix[i][vj[k]]=0;
            }
    }
};
