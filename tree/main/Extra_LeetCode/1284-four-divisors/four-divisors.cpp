class Solution {
public:
    int sumFourDivisors(vector<int>& a) {
        int n=a.size(),ans=0;
        for(int i=0;i<n;i++){
            int x=a[i],cnt=0,sum=0;
            for(int j=1;(long long)j*j<=x;j++){
                if(x%j==0){
                    int k=x/j;
                    if(j==k){
                        cnt++;
                        sum+=j;
                    }
                    else{
                        cnt+=2;
                        sum+=j+k;
                    }
                    if(cnt>4)break;
                }
            }
            if(cnt==4)ans+=sum;
        }
        return ans;
    }
};