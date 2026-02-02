class Solution {
public:
    long long minimumCost(vector<int>& a,int k,int dist){
        k--;
        multiset<int> l,r;
        long long cur=a[0];
        for(int i=1;i<=dist+1;i++){
            l.insert(a[i]);
            cur+=a[i];
        }
        while(l.size()>k){
            int x=*l.rbegin();
            cur-=x;
            r.insert(x);
            l.erase(l.find(x));
        }
        long long ans=cur;
        int n=a.size();
        for(int i=dist+2;i<n;i++){
            int out=a[i-dist-1];
            auto it=l.find(out);
            if(it!=l.end()){
                cur-=out;
                l.erase(it);
            }
            else r.erase(r.find(out));
            int in=a[i];
            if(in<*l.rbegin()){
                cur+=in;
                l.insert(in);
            }
            else r.insert(in);
            
            while(l.size()<k){
                int x=*r.begin();
                cur+=x;
                l.insert(x);
                r.erase(r.find(x));
            }
            while(l.size()>k){
                int x=*l.rbegin();
                cur-=x;
                r.insert(x);
                l.erase(l.find(x));
            }
            ans=min(ans,cur);
        }
        return ans;
    }
};
