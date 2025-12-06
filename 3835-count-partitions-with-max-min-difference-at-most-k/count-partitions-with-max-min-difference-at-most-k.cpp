class Solution{
public:
    int countPartitions(vector<int>& a,int k){
        int n=a.size();
        const int mod=1e9+7;
        vector<long long> dp(n+1),p(n+1);
        dp[0]=1; p[0]=1;
        deque<int> mn,mx;
        int l=1;
        for(int i=1;i<=n;i++){
            while(!mn.empty() && a[mn.back()-1]>=a[i-1]) mn.pop_back();
            mn.push_back(i);
            while(!mx.empty() && a[mx.back()-1]<=a[i-1]) mx.pop_back();
            mx.push_back(i);
            while(a[mx.front()-1]-a[mn.front()-1]>k){
                if(mn.front()==l) mn.pop_front();
                if(mx.front()==l) mx.pop_front();
                l++;
            }
            int L=l;
            long long sub=(L-2>=0?p[L-2]:0);
            dp[i]=(p[i-1]-sub+mod)%mod;
            p[i]=(p[i-1]+dp[i])%mod;
        }
        return dp[n];
    }
};