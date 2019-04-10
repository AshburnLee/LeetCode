//
// Created by junhui on 10/04/19.
//
#include <iostream>
#include <stack>
#include <climits>

using namespace std;

class MinStack {
private:
    stack<int> mystack;
    stack<int> min;

public:
    MinStack() {}
    ~MinStack() {}

    void push(int x) {
        mystack.push(x);
        if (min.empty() || x <= getMin())
            min.push(x);
    }

    void pop() {
        if (mystack.top() == min.top())
            min.pop();
        mystack.pop();
    }

    int top() {
        return mystack.top();
    }

    int getMin() {
        return min.top();

    }

    void printContainer(){
        stack<int> copy();
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main(int argc, char** argv){
    MinStack* obj = new MinStack();
    cout<<obj->top()<<endl;
    obj->push(2);
    obj->push(3);
    obj->push(4);
    obj->printContainer();
    obj->pop();
    obj->printContainer();
    return 0;
}