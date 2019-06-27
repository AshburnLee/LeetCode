#ifndef _950REVEALCARDSININCREASINGORDER_SOLUTION_H
#define _950REVEALCARDSININCREASINGORDER_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;
/// time: O(logN)
/// space: O(N)
class Solution{
	public:
		vector<int> deckRevealedIncreasing(vector<int>& deck){
			sort(deck.begin(), deck.end(), [](int& a, int& b)->bool{
						return a>b;
					});

			deque<int> dq;
			dq.push_front(deck[0]);
			for (int i=1; i< deck.size(); i++){
				dq.insert(dq.begin(), *(dq.end()-1));
				dq.push_front(deck[i]);
				dq.pop_back();
			}

			return vector<int>(dq.begin(), dq.end());
		}
};

#endif
