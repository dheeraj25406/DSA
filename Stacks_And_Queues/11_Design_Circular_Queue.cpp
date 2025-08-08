// Problem: 622. Design Circular Queue  
// Link: https://leetcode.com/problems/design-circular-queue/  
// Time Complexity: O(1) for all operations  
// Space Complexity: O(k)  
// Approach: Use a fixed-size array with two pointers `front` and `rear`. Handle wrap-around using modulo operation. Track size separately to determine empty/full state.


class StockSpanner {
    stack<pair<int,int>> st;
public:
    StockSpanner() { 
    }
    int next(int price) {
        int sp=1;
        while(!st.empty() && st.top().first<=price){
            sp+=st.top().second;
            st.pop();
        }
        st.push({price,sp});
        return sp;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
