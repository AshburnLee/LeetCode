#ifndef _438FINDALLANAGRAMS_SOLUTION2_H
#define _438FINDALLANAGRAMS_SOLUTION2_H

#include <iostream>
#include <vector>

using namespace std;
/// time: O(N)
/// space: O(1)
class Solution2{
public:
	vector<int> findAnagrams(string s, string p){
		vector<int> res;
		vector<int> sRecord(26,0);
		vector<int> pRecord(26,0);
		int ps = p.length();
		int ss = s.length();

		if (ss < ps) return res;

		for (int i=0; i<ps; i++){
			pRecord[p[i]-'a']++;
			sRecord[s[i]-'a']++;

		}

		if (pRecord == sRecord) res.push_back(0);

		for (int i=0; i<ss-ps; i++){
			sRecord[s[i]-'a']--;
			sRecord[s[i+ps]-'a']++;

			if (sRecord == pRecord) res.push_back(i+1);
		}
		return res;
	}
	
};

#endif
