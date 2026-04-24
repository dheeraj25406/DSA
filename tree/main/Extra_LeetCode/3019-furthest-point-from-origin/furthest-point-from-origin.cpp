class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt1=0,cnt2=0,cnt3=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') cnt1++;
            else if(moves[i]=='R')cnt2++;
            else cnt3++;
        }
        if(cnt1>=cnt2) return cnt1+cnt3-cnt2;
        return cnt2+cnt3-cnt1;
    }
};