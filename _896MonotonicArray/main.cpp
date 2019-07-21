#include "Solution.h"

using namespace std;

int main(int argc, char** argv){
	
	vector<int> A{1,2,2,3};
	cout<<Solution().isMonotonic(A)<<endl;

	vector<int> B{5,3,2,1};
	cout<<Solution().isMonotonic(B)<<endl;

	vector<int> C{2,2,2,2};
	cout<<Solution().isMonotonic(C)<<endl;
	
	vector<int> D{2,2,1,2};
	cout<<Solution().isMonotonic(D)<<endl;
	return 0;
}
