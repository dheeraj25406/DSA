class Solution {
public:
    int countTriples(int n) {
        unordered_set<int> s;
        for(int i=1;i<=n;i++) s.insert(i*i);
        int ans=0;
        for(int c=1;c<=n;c++){
            int cc=c*c;
            for(int a=1;a<=n;a++){
                int x=cc-a*a;
                if(x<=0) break;
                if(s.count(x)) ans++;
            }
        }
        return ans;
    }
};