#ifndef _985SUMOFEVENNUMBER_SOLUTION_H
#define _985SUMOFEVENNUMBER_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;
/// time limit exceede
/// time: O(M*N)
/// space:O(1)
class Soltuion{

private:
	vector<int> res;
	void func(vector<int>& A, vector<int>& q){
		A[q[1]] += q[0];
		int sum = 0;
		for (auto i: A)
			if (i%2==0)
				sum+=i;
		res.push_back(sum);
	}
public:
	vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
		for (auto item: queries){
			func(A, item);
		}

		return res;
	}
};


#endif
