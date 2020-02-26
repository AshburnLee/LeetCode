#include "Solution.h"
#include <iostream>

using namespace std;

int main(){
	Solution* sol = new Solution();

	string S = "((()))))";
	cout<<sol->minAddToMakeValid(S)<<endl;
	string S2 = "(()()(";
	cout<<sol->minAddToMakeValid(S2)<<endl;
	string S3 = "()";
	cout<<sol->minAddToMakeValid(S3)<<endl;
	string S4 = "()))((";
	cout<<sol->minAddToMakeValid(S4)<<endl;
	return 0;
}
