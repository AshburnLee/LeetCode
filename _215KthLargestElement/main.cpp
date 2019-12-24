#include <iostream>
#include "Solution.h"
#include "Solution2.h"

using namespace std;

int main(){
	vector<int> test = {3,2,3,1,2,4,5,5,6};
	
	Solution sol;
	Solution2 sol2;

	for (int i=1; i<test.size(); i++){
		cout<<sol.findKthLargestElement(test, i)<<endl;
		cout<<sol2.findKthLargestElement(test, i)<<endl;
		cout<<endl;
	}
	return 0;
}
