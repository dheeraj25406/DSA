class Solution {
public:
    int maximizeSquareArea(int m,int n,vector<int>& hF,vector<int>& vF){
        const int M=1000000007;
        hF.push_back(1);
        hF.push_back(m);
        vF.push_back(1);
        vF.push_back(n);
        sort(hF.begin(),hF.end());
        sort(vF.begin(),vF.end());
        unordered_set<int> hg,vh;
        for(int i=0;i<hF.size();i++)
            for(int j=0;j<i;j++)
                hg.insert(hF[i]-hF[j]);
        for(int i=0;i<vF.size();i++)
            for(int j=0;j<i;j++)
                vh.insert(vF[i]-vF[j]);
        long long ans=-1;
        for(int x:hg){
            if(vh.count(x)){
                ans=max(ans,(long long)x);
            }
        }
        if(ans==-1)return -1;
        long long res=(ans%M)*(ans%M)%M;
        return (int)res;
    }
};