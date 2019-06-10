#ifndef _187REPEATEDDNA_SOLUTION_H
#define _187REPEATEDDNA_SOLUTION_H

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

///time: O(N)
///space: O(N)
class Solution{
public:
				vector<string> findRepeatedDnaSequences(string s){
								vector<string> res;
								unordered_map<string, int> mp;
								for (int i=0; i<=s.length()-10; i++){
												string dna = s.substr(i, 10);
												mp[dna]++;
								}

								for (auto itr=mp.begin(); itr!=mp.end(); itr++){
												if (itr->second>1)
																res.push_back(itr->first);
								}
								return res;
				}
};

#endif
