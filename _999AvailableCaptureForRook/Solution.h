#ifndef _999AVAILBLECAPTUREFORROOK_SOLUTION_H
#define _999AVAILBLECAPTUREFORROOK_SOLUTION_H

#include <iostream>
#include <vector>
/// time: O(N)
/// space: O(1)
using namespace std;
class Solution{
	public:
		int numRookCaptures(vector<vector<char>>& board){
			int res=0;
			int n=8;
			int starti=0;
			int startj=0;
			for (int i=0; i<n; i++){
				for (int j=0; j<n; j++){
					if (board[i][j]=='R'){
						starti = i;
						startj = j;
					}
				}
			}

			for (int i=starti; i>=0; i--){
				if ( board[i][startj]=='p'){res++; break; }
				else if ( board[i][startj]=='B') break;
			}
			for (int i=starti; i<n; i++){
				if ( board[i][startj]=='p'){ res++; break; }
				else if ( board[i][startj]=='B') break;
			}
			for (int j=startj; j>=0; j--){
				if ( board[starti][j]=='p'){ res++; break; }
				else if ( board[starti][j]=='B') break;
			}
			for (int j=startj; j<n; j++){
				if ( board[starti][j]=='p'){ res++; break; }
				else if ( board[starti][j]=='B') break;
			}

			return res;

		}
};

#endif
