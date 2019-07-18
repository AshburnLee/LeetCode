#ifndef _888FAIRCNADYSWAP_SOLUTION_H
#define _888FAIRCNADYSWAP_SOLUTION_H

#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>

///time: O(M*N)
/// space:O(1)
using namespace std;
class Solution{
public:
	vector<int> fairCandySwap(vector<int>& A, vector<int>& B){

		vector<int> res;
		int sumA = accumulate(A.begin(), A.end() ,0);
		int sumB = accumulate(B.begin(), B.end() ,0);
		int avr = (sumA+sumB)/2;
        	int diff = (sumA-sumB)/2;

		for (auto& a:A){
			for (auto& b:B){
				if (a-b==diff){
					swap(a,b);
					if (accumulate(A.begin(), A.end(), 0)==avr){
						res.push_back(b);
						res.push_back(a);
						return res;
					}
					else
						swap(a,b);
				}
			}
		}
		throw invalid_argument("No solution");
	}

};

#endif
