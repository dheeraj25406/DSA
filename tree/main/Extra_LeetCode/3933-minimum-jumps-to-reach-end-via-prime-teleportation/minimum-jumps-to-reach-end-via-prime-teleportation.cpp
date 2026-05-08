class Solution {
public:
    int minJumps(vector<int>& nums) {
        int n=nums.size();
        int mx=*max_element(nums.begin(),nums.end());
        vector<bool>isPrime(mx+1,true);
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i*i<=mx;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=mx;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]].emplace_back(i);
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<bool>visited(n,false);
        pq.push({0,0});
        visited[0]=true;
        while(!pq.empty()){
            auto [steps,i]=pq.top();
            pq.pop();
            if(i==n-1) return steps;
            if(i>0 && !visited[i-1]){
                pq.push({steps+1,i-1});
                visited[i-1]=true;
            }
             if(i<n-1 && !visited[i+1]){
                pq.push({steps+1,i+1});
                visited[i+1]=true;
            }
            if(isPrime[nums[i]]){
                int p=nums[i];
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