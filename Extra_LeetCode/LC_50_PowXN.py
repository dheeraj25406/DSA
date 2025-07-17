# LC 50: Pow(x, n)
# Link: https://leetcode.com/problems/powx-n/
# Time Complexity: O(log n)
# Space Complexity: O(1)

class Solution {
public:
    
    double myPow(double x, int n) {
        long long N=n;
        if(N==0)    return 1;
        if(N<0)
        {
            x=1/x;
            N=-N;
        }
        if(N%2==0)  return myPow(x*x,N/2);
        else    return x*myPow(x*x,N/2);
    }
};
