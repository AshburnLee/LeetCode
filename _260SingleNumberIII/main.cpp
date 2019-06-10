#include <iostream>
#include "Solution.h"
#include "Solution2.h"
using namespace std;

int main(int argc, char** argv){
				vector<int> nums = {1,2,1,2,3,4};
				vector<int> res = Solution().singleNumber(nums);

				vector<int> test;
				for (int i=0; i<1000; i++)
								test.push_back(i+1);
				test.push_back(56);

				int T=0;
				for (auto i: test)
								T ^= i;

				int S=0;
				for (int i=0; i<1000; i++)
								S ^= (i+1);


				cout<<(T^S)<<endl;
				
	
	return 0;	
}
