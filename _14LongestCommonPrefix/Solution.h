#ifndef _14LONGESTCOMMONPREFIX_SOLUTION_H
#define _14LONGESTCOMMONPREFIX_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;
///time: O(N*M)
/// space: O(1)
class Solution{
	public:
		string longestCommonPrefix(vector<string>& strs){
			if (strs.size() == 0) return "";
			string res = "";

			for (int i=0; i<strs[0].length(); i++){
				char tmp = strs[0][i];
				for (int j=0; j<strs.size(); j++){
					if (tmp != strs[j][i])
						return res;

				}
				res.push_back(tmp);
			}

			return res;
			
		}
};

#endif
