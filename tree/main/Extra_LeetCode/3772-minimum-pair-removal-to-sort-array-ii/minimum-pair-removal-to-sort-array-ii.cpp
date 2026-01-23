class Solution {
public:
    int minimumPairRemoval(vector<int>& a) {
        int n=a.size();
        vector<long long> v(n);
        vector<int> l(n),r(n);
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<>> pq;
        int bad=0;
        for(int i=0;i<n;i++){
            v[i]=a[i];
            l[i]=i-1;
            r[i]=i+1;
        }
        r[n-1]=-1;
        for(int i=0;i+1<n;i++){
            if(a[i]>a[i+1]) bad++;
            pq.push({a[i]+a[i+1],i});
        }
        int ans=0;
        while(bad>0){
            auto [s,i]=pq.top(); pq.pop();
            int j=r[i];
            if(j==-1) continue;
            if(s!=v[i]+v[j]) continue;
            if(l[i]!=-1 && v[l[i]]>v[i]) bad--;
            if(v[i]>v[j]) bad--;
            if(r[j]!=-1 && v[j]>v[r[j]]) bad--;
            r[i]=r[j];
            if(r[j]!=-1) l[r[j]]=i;
            l[j]=r[j]=-1;
            v[i]+=v[j];
            if(l[i]!=-1){
                if(v[l[i]]>v[i]) bad++;
                pq.push({v[l[i]]+v[i],l[i]});
            }
            if(r[i]!=-1){
                if(v[i]>v[r[i]]) bad++;
                pq.push({v[i]+v[r[i]],i});
            }
            ans++;
        }
        return ans;
    }
};