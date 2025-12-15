class Solution {
public:
    long long solve(long long c){
        if(c%2==0)  return (c/2)*(c-1);
        else    return ((c-1)/2)*c;
    }
    long long getDescentPeriods(vector<int>& p) {
        long long ans=1;
        if(p.size()==1) return ans;
        int cnt=1;
        for(int i=1;i<p.size();i++){
            ans++;
            if(i==p.size()-1){
                if(p[i-1]-p[i]==1) cnt++;
                ans+=solve((long long)cnt); 
                break;
            }
            if(p[i-1]-p[i]==1) cnt++;
            else{
                ans+=solve((long long)cnt);
                cnt=1;
            }
        }
        return ans;
    }
};