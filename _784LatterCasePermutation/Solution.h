#ifndef _784LETTERCASEPERMUTATION_SOLUTION_H
#define _784LETTERCASEPERMUTATION_SOLUTION_H

#include <iostream>
#include <vector>
#include <string>

/// time: O(N)
///space: O(N)
class Solution{
	public:
		std::vector<std::string> letterCasePermutation(std::string S){
			std::vector<std::string> res;
			backTrack(S, 0, res);
			return res;
		}

	private:
		void backTrack(std::string& s, int i, std::vector<std::string>& res){
			if (i==s.size()){
				res.push_back(s);
				return;
			}

			backTrack(s, i+1, res);
			if (isalpha(s[i])){
				s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
				backTrack(s, i+1, res);
			}
//            	char c = s[i];
//         	if (isalpha(c)){
//				s[i] = islower(c) ? toupper(c) : tolower(c);
//				backTrack(s, i+1, res);
//			}
		
		}

};

#endif
