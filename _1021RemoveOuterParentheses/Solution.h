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

    // �ж�����ƥ���㷨
    bool matchParenthese(string S){
    	stack<char> stack;
	// ����ÿһ���ַ�
	for(int i=0; i<S.size(); i++){
	    // �����'(', ��ջ
	    if(S[i] == '(' )
		stack.push(S[i]);
	    // �����')'����ջ��Ԫ�رȽ�
	    else {
		// ���ջΪ�գ��򲻺Ϸ�
		if(stack.size() == 0)
		    return false;
		// �õ�ջ��Ԫ��
	    	char c = stack.top();
		stack.pop();
		// ƥ��ԭ��
		char match;
		if (S[i] == ')') match = '(';
	        
		// ��ʱ�ſ�ʼƥ��
		if(c != match) return false;
	    }
	}
	if(stack.size() != 0) 
	    return false;
	return true;
    }
};


#endif
