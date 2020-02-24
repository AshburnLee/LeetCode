#ifndef _1021REMOVWOUTERMOSTPARENTHESES_H_
#define _1021REMOVWOUTERMOSTPARENTHESES_H_

#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;
// time: O()
// space: O()
class Solution{
public:
    string removeOutermostParentheses(string S){
	vector<int> arr;
	arr.push_back(-1);

    	stack<char> stack;
	for(int i=0;i<S.size(); i++){
	    if(S[i] == '(')
		stack.push(S[i]);
	    else{
		if(stack.size()==0)
		    arr.push_back(i);
		stack.pop();
		if(stack.size()==0)
		    arr.push_back(i);
	    }
	}
	// the 2nd step
	string resS;
	for(int i=0; i<arr.size()-1; i++){
	    int start = arr[i]+2;
	    int end = arr[i+1]-1;
	    if(start>=end) continue;
	    for(int j=start; j<=end; j++){
	    	resS+=S[j];
	    }
	}
	return resS;
    }

    // 判断括号匹配算法
    bool matchParenthese(string S){
    	stack<char> stack;
	// 遍历每一个字符
	for(int i=0; i<S.size(); i++){
	    // 如果是'(', 入栈
	    if(S[i] == '(' )
		stack.push(S[i]);
	    // 如果是')'，与栈顶元素比较
	    else {
		// 如果栈为空，则不合法
		if(stack.size() == 0)
		    return false;
		// 得到栈顶元素
	    	char c = stack.top();
		stack.pop();
		// 匹配原则
		char match;
		if (S[i] == ')') match = '(';
	        
		// 这时才开始匹配
		if(c != match) return false;
	    }
	}
	if(stack.size() != 0) 
	    return false;
	return true;
    }
};


#endif
