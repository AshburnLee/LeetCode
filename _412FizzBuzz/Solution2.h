#ifndef _412FIZZBUZZ_SOLUTION2_H
#define _412FIZZBUZZ_SOLUTION2_H

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

//time: O(N)
//space: O(1)
class Solution2{
public:
	vector<string> fizzBuzz(int n){
		vector<string> res;

		for (int i=1; i<=n; i++){
			if (i%3==0 && i%5==0) res.push_back("FizzBuzz");
			else if (i%3==0 && i%5!=0) res.push_back("Fizz");
			else if (i%5==0 && i%3!=0) res.push_back("Buzz");
			else {
				stringstream ss;
				ss<<i;
				res.push_back(ss.str());
			}

		}
		
		return res;
	}


};

#endif
