# Q10: Search a 2D Matrix
# LeetCode: https://leetcode.com/problems/search-a-2d-matrix/
# Time Complexity: O(log(m * n))
# Space Complexity: O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix.size()-1;
        int mid=i+(j-i)/2;
        while(i<=j){
            mid=i+(j-i)/2;
            if(matrix[mid][0]<target)   i=mid+1;
            else if(matrix[mid][0]>target)  j=mid-1;
            else    return true;
        }

        if(j<0)    return false;
        else{

        vector<int> v=matrix[j];
        int a=0,b=v.size()-1;
        int m=a+(b-a)/2;
        while(a<=b){
            m=a+(b-a)/2;
            if(v[m]<target)   a=m+1;
            else if(v[m]>target)  b=m-1;
            else    return true;
        }

        return false;
        }

    }
};
