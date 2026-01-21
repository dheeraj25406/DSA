class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& n) {
        // okie the same pattern as yesterdays POTD
        // just asked to minimuze the ans[i]
        // lets code it, we just need to subtrct the 100... where i should be 
        // at first LSB 0 bit
        int s=n.size();
        vector<int> ans(s);
        for(int i=0;i<s;i++){
            int x=n[i];
            if(!(x&1))  ans[i]=-1;
            else if(!(x&(x+1))) ans[i]=x>>1;
            else{
                int temp=0;
                while(x&(1<<temp))   temp++;
                ans[i]=x-(1<<(temp-1));
            }
        }
        return ans;
    }
};