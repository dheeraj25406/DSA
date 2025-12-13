class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
        vector<pair<int,string>> v;
        unordered_map<string,int> mp;
        mp["electronics"]=0;
        mp["grocery"]=1;
        mp["pharmacy"]=2;
        mp["restaurant"]=3;
        for(int i=0;i<n;i++){
            string &s=code[i];
            if(!isActive[i]) continue;
            if(s.size()==0) continue;
            bool ok=true;
            for(char c: s){
                if(!( (c>='0'&&c<='9') || (c>='a'&&c<='z') || (c>='A'&&c<='Z') || c=='_' )){
                    ok=false;
                    break;
                }
            }
            if(!ok) continue;
            if(mp.find(businessLine[i])==mp.end()) continue;
            v.push_back({mp[businessLine[i]],s});
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            if(a.first!=b.first) return a.first<b.first;
            return a.second<b.second;
        });
        vector<string> ans;
        for(auto &p:v) ans.push_back(p.second);
        return ans;
    }
};