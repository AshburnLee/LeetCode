#ifndef _1002FINDCOMMONCHARACTER_SOLUTION_H
#define _1002FINDCOMMONCHARACTER_SOLUTION_H


#include <iostream>
#include <vector>
#include <climits>

using namespace std;
/// time: O(N)
/// space: O(1)
class Solution{

public:
	
	vector<string> commonChars(vector<string>& A){
		vector<int> count26(26, INT_MAX);
		vector<string> res;

		for (auto word: A){
			
			vector<int> count(26, 0);
			for (auto chara: word){
			
				count[chara - 'a']++;
			}
			for (int i=0; i<26; i++){
				count26[i] = min(count26[i], count[i]);
			}
		}
		for (int i=0; i<26; i++)
			for (int j=0; j<count26[i]; j++)
				res.push_back(string(1, i+'a'));
		return res;
	}	
};


#endif
