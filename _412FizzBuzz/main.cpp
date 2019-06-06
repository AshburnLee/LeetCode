#include <iostream>
#include <vector>
#include "Solution.h"
#include "Solution2.h"

using namespace std;

int main(){
	vector<string> res = Solution2().fizzBuzz(15);
	for (auto i: res)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
