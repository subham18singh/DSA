class MyStack {
public:
    queue<int> que;
    MyStack() {    
    }
    
    void push(int x) {
        int s = que.size();
        que.push(x);
        for(int i = 0;i<s;i++){
            que.push(que.front());
            que.pop();
        }
    }
    
    int pop() {
        if(!empty()){
            int val = que.front();
            que.pop();
            return val;
        }
        else{
            return -1;
        }
    }
    
    int top() {
        if(!empty()){
            return que.front();
        }
        else{
            return -1;
        }
    }
    
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */