class Solution {
public:
    bool hasAllCodes(string s,int k) {
        int n=s.size();
        if(k>n)return false;
        unordered_set<int> st;
        int cur=0;
        for(int i=0;i<k;i++) cur=(cur<<1)|(s[i]-'0');
        st.insert(cur);
        int mask=(1<<k)-1;
        for(int i=k;i<n;i++){
            cur=((cur<<1)&mask)|(s[i]-'0');
            st.insert(cur);
            if(st.size()==(1<<k)) return true;
        }
        return st.size()==(1<<k);
    }
};