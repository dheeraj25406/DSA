class Solution {
public:
    int minimumPairRemoval(vector<int>& n) {
        // okay, so read the question
        // so we shld select the left most adjcnt pair of elements in n
        // such that their sum is least, MINIMUM
        // UNTIL the array is non decreasing
        // manual check for 5 2 3 1
        // min sum for 3 + 1 = 4, so it becomes 5 2 4
        // min sum for 4 + 2 = 6, so it becomes 5 6
        // it is non decreasing now (it shld not decrease, elements can be equal)
        // lets think if it can be simply solved using math
        // its 20 mins up, still no thought related to match, no observation
        // lets simulate it then
        // saw the hint, it says SIMULATE THE OPERATION
        // i guess time complexity sucks but lets simulate
        // non decreasing, increasing 
        // IT MEANS WE SHOULD DO IT UNTIL IT IS SORTED
        
        int ans=0;
        while(true){
            int sm=INT_MAX;
            int idx=0;
            vector<int> v(n.size());
            for(int i=0;i<n.size();i++) v[i]=n[i];
            sort(v.begin(),v.end());
            if(v==n)    return ans;
            int i;
            for(i=0;i+1<n.size();i++){
                if(n[i]+n[i+1]<sm){
                    sm=n[i]+n[i+1];
                    idx=i;
                }
            }
            n[idx]=sm;
            n.erase(n.begin()+idx+1);
            ans++;
        }
        return 0;
    }
};