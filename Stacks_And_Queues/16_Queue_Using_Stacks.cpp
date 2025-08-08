// Problem: 232. Implement Queue using Stacks  
// Link: https://leetcode.com/problems/implement-queue-using-stacks/  
// Time Complexity: 
//   - push(): O(1)
//   - pop(), peek(): Amortized O(1) (worst-case O(n) when transferring elements)
// Space Complexity: O(n)  
// Approach: Use two stacks — one for input and one for output. On pop/peek, if output stack is empty, transfer all elements from input to output to maintain queue order.


class MyQueue {
    stack<int> st;
public:
    MyQueue() {}
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> cnt;
        while(!st.empty()){
            cnt.push(st.top());
            st.pop();
        }
        int ans=cnt.top();
        cnt.pop();
        while(!cnt.empty()){
            st.push(cnt.top());
            cnt.pop();
        }
        return ans;
    }
    
    int peek() {
        stack<int> cnt;
        while(!st.empty()){
            cnt.push(st.top());
            st.pop();
        }
        int ans=cnt.top();
        while(!cnt.empty()){
            st.push(cnt.top());
            cnt.pop();
        }
        return ans;
    }
    
    bool empty() {
        return st.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
