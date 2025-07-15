# Problem: Koko Eating Bananas
# LeetCode: https://leetcode.com/problems/koko-eating-bananas/
# Approach: Binary search on answer (min eating speed), it may range from 1 to max value of bananas in a single pile.
# Time Complexity: O(n log m), where m = max(piles)
# Space Complexity: O(1)

class Solution {
public:

    int chek(vector<int> v, int k){
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%k==0)   ans+=v[i]/k;
            else    ans+=v[i]/k+1;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int i=1,j=*max_element(piles.begin(),piles.end()),mid=i+(j-i)/2;
        while(i<j){
            mid=i+(j-i)/2;
            if (chek(piles,mid)>h)    i=mid+1;
            else    j=mid;
        }
        return i;

        
    }
};
