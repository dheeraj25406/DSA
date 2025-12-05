class Solution {
public:
    int rob(vector<int>& a) {
        int n=a.size();
        if(n==1)return a[0];
        int p=a[0],q=max(a[0],a[1]);
        for(int i=2;i<n;i++){
            int tmp=max(q,p+a[i]);
            p=q;
            q=tmp;
        }
        return q;
    }
};
