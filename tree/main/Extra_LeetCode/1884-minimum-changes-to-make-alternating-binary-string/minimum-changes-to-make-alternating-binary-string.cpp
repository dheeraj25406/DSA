class Solution {
public:
    int minOperations(string s) {
        int d1=0,d2=0;
        for(int i=0;i<s.size();i++){
            if(i%2){
                if(s[i]=='0')    d1++;
                else    d2++;
            }
            else{
                if(s[i]=='1')    d1++;
                else    d2++;
            }
        }
        return min(d1,d2);
    }
};