#include <iostream>
#include <vector>
#include <sstream>
#include "Solution.h"
//using namespace std;

int main(int argc, char** argv){
	vector<string> res = Solution().fizzBuzz(15);

	for (auto i: res)
		cout<<i<<" ";

	cout<<endl;
	return 0;
}
