class Solution {
public:
    bool judgeCircle(string m) {
        int u=0,d=0,l=0,r=0;
        for(char c:m){
            if(c=='U')  u++;
            else if(c=='D') d++;
            else if(c=='L') l++;
            else if(c=='R') r++;
        }
        if(u==d && l==r)    return true;
        return false;
    }
};