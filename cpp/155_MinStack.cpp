class MinStack {
public:
    void push(int x) {
        normal.push(x);
        if(min.empty() || x <= min.top()){
            min.push(x);
        }
    }

    void pop() {
        if(min.top() == normal.top()){
            min.pop();
        }
        normal.pop();
    }

    int top() {
        return normal.top();
    }

    int getMin() {
        return min.top();
    }
private:
    stack<int> normal;
    stack<int> min;
};