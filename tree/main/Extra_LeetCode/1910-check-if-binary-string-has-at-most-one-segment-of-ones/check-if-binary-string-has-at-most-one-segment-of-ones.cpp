class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()==1 && s[0]=='1') return true;
        int i=0;
        while(s[i]=='1')    i++;
        for(i;i<s.size();i++){
            if(s[i]=='1')  return false;
        }
        return true;
    }
};