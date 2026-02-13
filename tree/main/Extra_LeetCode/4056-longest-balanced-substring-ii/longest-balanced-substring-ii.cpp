class Solution {
public:
    int longestBalanced(string s) {
        int ans = 0,n=s.size();

        for(int i=0,j;i<n;i=j){
            j=i+1;
            while(j<n && s[j]==s[i]) j++;
            ans = max(ans,j-i);
        }

        auto go2=[&](char x,char y){
            unordered_map<int,int> mp;
            int d=0,res=0;
            mp[0]= -1;
            for(int i=0;i<n;i++){
                if(s[i]==x) d++;
                else if(s[i]==y) d--;
                else {
                    mp.clear();
                    mp[0]=i;
                    d=0;
                    continue;
                }
                if(mp.count(d)) res=max(res,i-mp[d]);
                else mp[d]=i;
            }
            return res;
        };
        ans = max(ans, max({go2('a','b'),go2('b','c'),go2('a','c')}));
        unordered_map<long long,int> mp;
        int ca=0,cb=0,cc=0;
        mp[0]= -1;
        for(int i=0;i<n;i++){
            if(s[i]=='a') ca++;
            if(s[i]=='b') cb++;
            if(s[i]=='c') cc++;
            long long key= ((long long)(ca-cb)<<32)^(long long)(cb-cc & 0xffffffff);
            if(mp.count(key)) ans = max(ans,i-mp[key]);
            else mp[key]=i;
        }
        return ans;
    }
};