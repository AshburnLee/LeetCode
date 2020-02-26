#ifndef _155MINSTACK_MINSTACK_H_
#define _155MINSTACK_MINSTACK_H_

#include <iostream>
#include <stack>

using namespace std;

class MinStack{
private:
	stack<int> mystack;
	stack<int> min;
public:
	MinStack(){};
	~MinStack(){};

	void push(int x){
		mystack.push(x);
		if(min.empty() || x<=min.top())
			min.push(x);
	}

	int top(){
		return mystack.top();	
	}

	int getMin(){
		return min.top();	
	}
	bool empty(){
		return mystack.empty();
	}

	void pop(){
		if(mystack.top() == min.top())
			min.pop();
		mystack.pop();
	}
	
};


#endif
