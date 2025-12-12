class Solution {
public:
    vector<int> countMentions(int n, vector<vector<string>>& e) {
        vector<int> ans(n,0),off(n,0);

        sort(e.begin(),e.end(),[&](auto &a,auto &b){
            int ta=stoi(a[1]),tb=stoi(b[1]);
            if(ta!=tb) return ta<tb;
            return a[0]=="OFFLINE" && b[0]=="MESSAGE";
        });

        for(auto &p:e){
            int t=stoi(p[1]);
            if(p[0]=="OFFLINE"){
                int id=stoi(p[2]);
                off[id]=t+60;
            } 
            else {
                string &s=p[2];
                if(s=="ALL"){
                    for(int i=0;i<n;i++) ans[i]++;
                } 
                else if(s=="HERE"){
                    for(int i=0;i<n;i++){
                        if(t>=off[i]) ans[i]++;
                    }
                } 
                else {
                    for(int i=0;i<s.size();){
                        if(i+1<s.size() && s[i]=='i' && s[i+1]=='d'){
                            i+=2;
                            int id=0;
                            while(i<s.size() && isdigit(s[i])){
                                id=id*10+(s[i]-'0');
                                i++;
                            }
                            ans[id]++;
                        } 
                        else i++;
                    }
                }
            }
        }
        return ans;
    }
};