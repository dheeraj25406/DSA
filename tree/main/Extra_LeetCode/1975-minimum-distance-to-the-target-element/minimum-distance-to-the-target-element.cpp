class Solution {
public:
    int getMinDistance(vector<int>& n, int t, int s) {
        int ans=INT_MAX;
        for(int i=0;i<n.size();i++){
            if(n[i]==t){
                if(ans==INT_MAX)    ans=i;
                else if(abs(i-s)<abs(ans-s)) ans=i;
            }
        }
        return abs(ans-s);
    }
};