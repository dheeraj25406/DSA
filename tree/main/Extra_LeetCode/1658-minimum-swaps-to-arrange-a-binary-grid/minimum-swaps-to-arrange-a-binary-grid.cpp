class Solution {
public:
    int minSwaps(vector<vector<int>>& g) {
        // after the diagonal elements, there must be trailing zeros
        // these last diagonal ones help us to know at what position,
        // that particular row in the grid has to be kept
        // so, if there is last 1 at 0th pos, it is the first row
        // if there is at last position, it the the last grid
        // so, we will make an array of last ones,
        // and will swap them, according to ascnding order
        // we cant swap directly, if we need to swap first and third grid,
        // we need to swap all from 1 to 3, so we'll use a for loop for that
        // not directly swap() function
        // counting the total swaps, which will be the answer
        // if it cant be simulated, return -1..
        // this is the complete logic, lets code it now
        int n=g.size();
        vector<int> z(n);
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=n-1;j>=0;j--){
                if(g[i][j]==0)c++;
                else break;
            }
            z[i]=c;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int need=n-i-1;
            int j=i;
            while(j<n && z[j]<need)j++;
            if(j==n)return -1;
            while(j>i){
                swap(z[j],z[j-1]);
                ans++;
                j--;
            }
        }
        
        return ans;
    }
};