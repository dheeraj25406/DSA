// Problem: 901. Online Stock Span  
// Link: https://leetcode.com/problems/online-stock-span/  
// Time Complexity: O(n) amortized (each price is pushed and popped at most once)  
// Space Complexity: O(n)  
// Approach: Use a stack of {price, span}. For each price, pop while the top's price is less than or equal to current. Accumulate span from popped elements. Push current price with total span.

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
