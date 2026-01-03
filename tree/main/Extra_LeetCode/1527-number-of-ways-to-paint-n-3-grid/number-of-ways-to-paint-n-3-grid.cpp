class Solution {
public:
    int numOfWays(int n) {
        long long M=1000000007;
        long long a=6,b=6;
        for(int j=2;j<=n;j++){
            long long na=(2*a+2*b)%M;
            long long nb=(2*a+3*b)%M;
            a=na;
            b=nb;
        }
        return (a+b)%M;
    }
};