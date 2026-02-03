class Solution {
public:
    bool isTrionic(vector<int>& a) {
        int n=a.size();
        bool c1=0,c2=0,c3=0;
        for(int i=1;i<n;i++){
            int x=a[i-1],y=a[i];
            if(!c1){
                if(y>x)c1=1;
                else return 0;
            }
            else if(c1&&!c2){
                if(y>x)continue;
                else if(y<x)c2=1;
                else return 0;
            }
            else if(c1&&c2&&!c3){
                if(y<x)continue;
                else if(y==x)return 0;
                else c3=1;
            }
            else{
                if(y<=x)return 0;
            }
        }
        return c1&&c2&&c3;
    }
};
