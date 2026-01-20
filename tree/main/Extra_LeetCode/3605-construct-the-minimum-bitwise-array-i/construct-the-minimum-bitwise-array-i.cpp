class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& n) {
        // wrote the x, x+1 and x|x+1 for x in 0, 10
        // one observation is that if (x|x+1)+1 is a power of 2
        // the answer will be ((x|x+1)+1/2) - 1
        // thinking what if it is not
        // for nums[i] values 5,15 dont need special attention since
        // it is given that only prime integers are given
        // soo.. let us think for x=4,9, etc when (x|x+1)+1 is not power of 2
        // for x = 4 we get 5, for x = 9 we get 11.. any relation?
        // 4 - 5
        // 9 - 11
        // 10 - 11
        // 11 - 15
        // 12 - 13
        // 13 - 15
        // 14 - 15
        // 15 - 31
        // what can we observe from thiss...
        // 9 - 11, 12 - 13.. whts the relation
        // let us write this in binary and check
        // 9 - 11 --> 1001 - 1011
        // 12 - 13 -> 1100 - 1101
        // okie the least significant 0 is converted to 1..
        // but we framed relation for x -> nums[i]
        // we need for nums[i] -> x
        // okie simplee..
        // if right most 0 is converted, second right most will be left
        // so to the first 0 in nums[0], the immediate right digit of it
        // should be converted to 0 and
        // THATSSS THEE ANSWERR !!!
        // no wait.. let us think for x = 10110011
        // guess am wrongg
        // okiee.. so actually i found an observation
        // soo.. the traiing 1ns become 0 when we add 1, and the rightmost 0
        // becomes 1...
        // So when we add it becomes 11....111 smthng like this
        // so, if a number is 10011, we subtract 100 from it
        // like we just take a number, which is 1 last LSB 0, sub it
        // were just reversing the process
        // lets code now
        int s=n.size();
        vector<int> ans(s);
        for(int i=0;i<s;i++){
            int x=n[i];
            if(!(x&1))  ans[i]=-1;
            else if(!(x&(x+1))) ans[i]=x>>1;
            else{
                int tmp=0;
                while(x&(1<<tmp))   tmp++;
                ans[i]=x-(1<<(tmp-1));
            }
        }
        return ans;
    }
};