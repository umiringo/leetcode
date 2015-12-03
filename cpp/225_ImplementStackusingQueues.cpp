class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        inQueue.push(x);
        for(int i = 0; i < inQueue.size()-1; ++i){
            inQueue.push(inQueue.front());
            inQueue.pop();
        }
    }

    // Removes the element on top of the stack.
    void pop() {
        inQueue.pop();
    }

    // Get the top element.
    int top() {
        return inQueue.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return inQueue.empty();
    }
private:
    queue<int> inQueue;
};