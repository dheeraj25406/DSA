# Minimum Jumps to Reach End via Prime Teleportation

- Platform: LeetCode
- URL: https://leetcode.com/problems/minimum-jumps-to-reach-end-via-prime-teleportation/submissions/1998037413/?envType=daily-question&envId=2026-05-08
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0
ms
- Memory: 0.00
MB
- Solved At: 2026-05-08T09:55:01.484Z

## Code
```cpp
for(int j=p;j<=mx;j+=p){
                   if(mpp.count(j)){
                     for(auto idx:mpp[j]){
                        if(!visited[idx]){
                            visited[idx]=true;
                            pq.push({steps+1,idx});
                        }
                    }
                    mpp[j].clear();
                   }
                }
                isPrime[nums[i]]=false;
            }
        }
        return n-1;
    }
};
```