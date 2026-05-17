# Count K-th Roots in a Range

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-502/problems/count-k-th-roots-in-a-range/submissions/2005063184/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-05-17T02:50:58.273Z

## Code
```cpp
1class Solution {
2public:
3    long long powr(long long a,long long k,long long tmp){
4        long long ans=1;
5        for(int i=0;i<k;i++){
6            if(ans>(tmp/a)){
7                return tmp+1;
8            }
9            ans*=a;
10        }
11        return ans;
12    }
13    int root(long long tmp, int k){
14        if(tmp<=0)return 0;
15        long long l=1,r=tmp;
16        long long ans=1;
17        while(l<=r){
18            long long mid=l+(r-l)/2;
19            long long temp=powr(mid,k,tmp);
20            if(temp<=tmp){
21                ans=mid;
22                l=mid+1;
23            }
24            else{
25                r=mid-1;
26            }
27        }
28        return ans;
29    }
30    int countKthRoots(int l, int r, int k) {
31        int a=root(r,k);
32        int b=root(l-1,k);
33        int ans=a-b;
34        if(l==0)ans++;
35        return ans;
36    }
37};
```