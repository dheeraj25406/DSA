class Solution {
public:
    int bestClosingTime(string c) {
        int y=0,n=0;
        for(int i=0;i<c.size();i++){
            if(c[i]=='Y')   y++;
            else    n++;
        }
        int dn=0,dy=0;
        int tmp=y;
        int ans=0;
        for(int i=0;i<c.size();i++){
            if(c[i]=='Y')   dy++;
            else    dn++;
            if(dn+(y-dy)<tmp){
                tmp=dn+(y-dy);
                ans=i+1;
            }
        }
        if(n<tmp)   ans=c.size();
        return ans;
    }
};