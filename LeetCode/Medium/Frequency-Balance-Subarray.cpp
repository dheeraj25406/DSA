# Frequency Balance Subarray

- Platform: LeetCode
- URL: https://leetcode.com/contest/weekly-contest-506/problems/frequency-balance-subarray/submissions/2032284616/
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 0.00
MB
- Solved At: 2026-06-14T02:42:36.789Z

## Code
```cpp
1class Solution {
2public:
3    bool chk(unordered_map<int,int> &f){
4        if(f.size()==1)return true;
5        int mx=0;
6        for(auto &p:f)mx=max(mx,p.second);
7        bool has=0;
8        for(auto &p:f){
9            int x=p.second;
10            if(x==mx)continue;
11            has=1;
12            if(mx!=2*x)return false;
13        }
14        if(!has)return false;
15        return true;
16    }
17    int getLength(vector<int>& nums) {
18        int n=nums.size();
19        int ans=1;
20        for(int i=0;i<n;i++){
21            unordered_map<int,int> f;
22            unordered_map<int,int> cnt;
23            for(int j=i;j<n;j++){
24                int x=nums[j];
25                if(f[x]){
26                    cnt[f[x]]--;
27                    if(cnt[f[x]]==0)cnt.erase(f[x]);
28                }
29                f[x]++;
30                cnt[f[x]]++;
31                if(f.size()==1){
32                    ans=max(ans,j-i+1);
33                    continue;
34                }
35                if(cnt.size()!=2)continue;
36                int a=-1;
37                int b=-1;
38                for(auto &p:cnt){
39                    if(a==-1)a=p.first;
40                        else b=p.first;
41                }
42                if(a>b)swap(a,b);
43                if(2*a==b){
44                    ans=max(ans,j-i+1);
45                }
46            }
47        }
48        return ans;
49    }
50};
```