class Solution {
public:
    int minFlips(string s) {
        int n=s.size();
        string t=s+s;
        int d1=0,d2=0,ans=1e9;
        for(int i=0;i<t.size();i++){
            if(i%2){
                if(t[i]=='0')d1++;
                else d2++;
            }
            else{
                if(t[i]=='1')d1++;
                else d2++;
            }

            if(i>=n){
                int j=i-n;
                if(j%2){
                    if(t[j]=='0')d1--;
                    else d2--;
                }
                else{
                    if(t[j]=='1')d1--;
                    else d2--;
                }
            }
            if(i>=n-1)ans=min(ans,min(d1,d2));
        }
        return ans;
    }
};