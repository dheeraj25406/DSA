class Solution {
public:
    int countTriples(int n) {
        long long ans=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                long long x=i*i+j*j;
                if(((long long)sqrtl(x))*((long long)sqrtl(x))==x && x<=n*n){
                    ans++;
                }
            }
        }
        return ans;
    }
};