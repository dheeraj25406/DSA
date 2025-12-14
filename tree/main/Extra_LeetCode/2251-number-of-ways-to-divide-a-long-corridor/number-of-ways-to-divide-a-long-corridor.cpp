class Solution {
public:
    int numberOfWays(string s) {
        int n=s.size(),mod=1e9+7;
        long long ans=1;
        int cnt=0,tmp=0;
        for(int i=0;i<n;i++)if(s[i]=='S')cnt++;
        if(cnt==0||cnt%2)return 0;
        cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='S'){
                cnt++;
                if(cnt>2&&cnt%2==1){
                    ans=ans*(tmp+1)%mod;
                    tmp=0;
                }
            }
            else if(cnt>=2&&cnt%2==0) tmp++;
        }
        return ans;
    }
};
