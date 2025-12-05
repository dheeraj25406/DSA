class Solution {
public:
    int countPartitions(vector<int>& n) {
        int sum=0;
        int ans=0;
        int ls=0;
        for(int i=0;i<n.size();i++) sum+=n[i];
        int rs=sum;
        for(int i=0;i+1<n.size();i++){
            ls+=n[i];
            rs-=n[i];
            if((abs(ls-rs))%2==0)   ans++;
        }
        return ans;
    }
};