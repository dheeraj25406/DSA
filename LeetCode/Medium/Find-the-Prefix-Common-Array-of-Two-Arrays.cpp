# Find the Prefix Common Array of Two Arrays

- Platform: LeetCode
- URL: https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/submissions/2008442602/?envType=daily-question&envId=2026-05-20
- Difficulty: Medium
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: 133.59
MB
- Solved At: 2026-05-20T18:37:00.968Z

## Code
```cpp
prefixCount.push_back(prev);
        }
        vector<int> result;
        prev.clear();
        for(int i = 0; i < B.size(); i++) {
            int count = 0;
            prev.insert(B[i]);
            for(auto num : prev) {
                if(prefixCount[i].count(num)) count++;
            }
            result.push_back(count);
        }
        return result;
    }
};
```