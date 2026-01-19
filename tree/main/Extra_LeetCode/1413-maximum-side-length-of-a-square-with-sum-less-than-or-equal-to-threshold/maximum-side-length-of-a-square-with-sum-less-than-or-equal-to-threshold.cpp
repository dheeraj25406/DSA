class Solution {
public:
    int maxSideLength(vector<vector<int>>& m, int t) {
        // lets create a new 2D array, of all prefix sums
        // thinking of an efficient way to do this
        // once the array is created, check the condition od threshold..
        // but how.. 
        int n=m.size(),p=m[0].size(),ans=0;
        vector<vector<int>> v(n,vector<int>(p,0));
        int ism=0;
        int jsm=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                // how do i calculate the summm urgghh...
                // okie am confused
                // okie got an ideaa
                // v[i][j] = v[i-1][j]+v[i][j-1]-v[i-1][j-1]+m[i][j]
                // yeayy got the formulaa.. less implement ittt
                // we add only if existss
                // okiee lezz define the sizer of v first
                // omg this is gonna crashh
                int tmp=0;
                // howww tooo add thesee within these contraintssss
                if(i>0) tmp+=v[i-1][j];
                if(j>0) tmp+=v[i][j-1];
                if(i>0 && j>0)  tmp-=v[i-1][j-1];
                tmp+=m[i][j];
                v[i][j]=tmp;
            }
        }
            for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                for(int k=ans+1;k<=min(i+1,j+1);k++){
                    int s=v[i][j];
                    if(i-k>=0) s-=v[i-k][j];
                    if(j-k>=0) s-=v[i][j-k];
                    if(i-k>=0 && j-k>=0) s+=v[i-k][j-k];
                    if(s<=t) ans=k;
                    else break;
                }
            }
        }
        return ans;
    }
};