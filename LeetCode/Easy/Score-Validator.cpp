# Score Validator

- Platform: LeetCode
- URL: https://leetcode.com/contest/biweekly-contest-182/problems/score-validator/submissions/1998880766/
- Difficulty: Easy
- Language: C++
- Status: Accepted
- Runtime: 0 ms
- Memory: N/A
- Solved At: 2026-05-09T14:35:00.098Z

## Code
```cpp
class Solution {
public:
    vector<int> scoreValidator(vector<string>& e) {
        vector<int> v;
        int sc=0;
        int cnt=0;
        for(int i=0;i<e.size();i++){
            if(e[i]=="1" || e[i]=="WD" || e[i]=="NB"){
                sc+=1;
            }
            else if(e[i]=="2"){
                sc+=2;
            }
            else if(e[i]=="3"){
                sc+=3;
            }
            else if(e[i]=="4"){
                sc+=4;
            }
            else if(e[i]=="6"){
                sc+=6;
            }
            else if(e[i]=="W"){
                cnt++;
                if(cnt==10){
                    break;
                }
            }
            
        }
        v.push_back(sc);
        v.push_back(cnt);
        return v;
    }
}
```