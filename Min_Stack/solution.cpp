class MinStack {
public:
    void push(int x) {
        stack.insert(stack.begin(), x);
        if(stack.size() == 1)
            min = x;
        else
            if(x < min)
                min = x;
        return ;
    }

    void pop() {
        if(stack[0] <= min){
            stack.erase(stack.begin());
            min = stack[0];
            for(int i=1 ; i<stack.size() ; i++)
                if(stack[i] < min)
                    min = stack[i];
        }
        else
            stack.erase(stack.begin());
        return ;
    }

    int top() {
        return stack[0];
    }

    int getMin() {
        return min;
    }
private:
    vector<int> stack;
    int min;
};
