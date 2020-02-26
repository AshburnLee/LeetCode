#ifndef	_921MINADD_SOLUTION_H_
#define	_921MINADD_SOLUTION_H_

#include <iostream>
#include <stack>

using namespace std;
// time:(N)
// space:(N)
class Solution{
public:
	int minAddToMakeValid(string S){
		
		stack<int> stack;
		// the key is 'count', which
		// refers to the number of valid paires
		// 
		int count=0;
        for(int i=0;i<S.size(); i++){
            if(S[i] == '(')
                stack.push(S[i]);

            else if(S[i] == ')'){
                if(!stack.empty()){
                    stack.pop();
					count++;
                }   
            }
        }
        
        return S.length()-2*count;
	}
};


#endif
