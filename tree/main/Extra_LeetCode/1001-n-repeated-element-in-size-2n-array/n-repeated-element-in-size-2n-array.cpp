class Solution {
public:
    int repeatedNTimes(vector<int>& n) {
        sort(n.begin(),n.end());
        for(int i=0;i+1<n.size();i++){
            if(n[i]==n[i+1])    return n[i];
        }
        return -1;
    }
};