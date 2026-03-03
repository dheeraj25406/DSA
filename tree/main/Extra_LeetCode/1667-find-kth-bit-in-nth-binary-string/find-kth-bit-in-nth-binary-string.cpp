class Solution {
public:
    string invert(string st){
        for(int i=0;i<st.size();i++){
            if(st[i]=='0')   st[i]='1';
            else    st[i]='0';
        }
        return st;
    }
    string solve(int n){
        if(n==1)        return "0";
        string temp=solve(n-1);
        string tmp=invert(temp);
        reverse(tmp.begin(),tmp.end());
        return temp+'1'+tmp;
    }
    char findKthBit(int n, int k) {
        string ans=solve(n);
        return ans[k-1];
    }
};