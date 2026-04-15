class Solution {
public:
    int solve(int amt, vector<int>& v, int n,vector<vector<int>> &t){
        if(amt==0)  return 1;
        if(amt<0)   return 0;
        else if(n<=0)    return  0;
        if(t[n][amt]==-1){
            t[n][amt]=solve(amt,v,n-1,t)+solve(amt-v[n-1],v,n,t);
        }
        return t[n][amt];
    }
    int change(int amt, vector<int>& v) {
        vector<vector<int>> t(v.size()+1,vector<int>(amt+1,-1));
        int ans=solve(amt,v,v.size(),t);
        return ans;
    }
};