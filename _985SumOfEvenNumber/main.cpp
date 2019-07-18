#include "Solution.h"
#include "Solution2.h"

int main(int argc, char** argv){
	vector<int> A = {1,2,3,4};
	vector<vector<int>> queried = {{1,0},{-3,1},{-4,0},{2,3}};

	vector<int> res = Soltuion2().sumEvenAfterQueries(A, queried);
	for (auto i: res)
		cout<<i<<" ";
	cout<<endl;


	return 0;
}
