#ifndef _LCS_SOLUTION_H
#define _LCS_SOLUTION_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/// time: O(N*M)
/// space: O(N*M)
class Solution{
public:
	string getLCS(const string& s1, const string& s2){
		int m = s1.size();
		int n = s2.size();
		
		vector<vector<int>> memo(m ,vector<int>(n, 0));
		// initilize memo
		for (int i=0; i<m; i++){
			if (s1[i]==s2[0]){
				for (int k=i; k<m; k++)
					memo[k][0] = 1;
				break;
			}	
		}

		for (int j=0; j<n; j++){
			if (s2[j]==s1[0]){
				for (int k=j; k<n; k++)
					memo[0][k]=1;
				break;
			}	
		}

		// DP progress fro the rest
		for (int i=1; i<m; i++){
			for (int j=1; j<n; j++){
				if (s1[i]==s2[j])
					memo[i][j] = 1 + memo[i-1][j-1];
				else
					memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
			}	
		}

		cout<<"The lenght of the LCS: "<<memo[m-1][n-1]<<endl;
		// get the longest common sequence
		string res = "";
		while (m>=0 && n>=0){
			if (s1[m] == s2[n]){
				res = s1[m] + res;
				m--;
				n--;
			}
			else if (m==0) n--;
			else if (n==0) m--;
			else{
				if (memo[m-1][n]>memo[m][n-1]) m--;
				else n--;
			}
		}
		return res;

	}
};

#endif 
