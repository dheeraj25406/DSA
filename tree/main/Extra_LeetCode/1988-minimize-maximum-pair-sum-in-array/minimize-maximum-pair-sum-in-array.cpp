class Solution {
public:
    int minPairSum(vector<int>& n) {
        // First thing that comes to my mind after seeing words
        // Maximum and minimum is SORTING
        // if you didn't get any idea till now,
        // STOP watching the soltion and think of sorting
        // now, all minimuzed pairs can be made only by sorting array
        // and making pair of ith element from first and last
        // then we will check for max sum accordingly
        sort(n.begin(),n.end());
        int ans=INT_MIN;
        int s=n.size();
        for(int i=0;i<(s/2);i++)  ans=max(ans,n[i]+n[s-i-1]);
        return ans;
    }
};