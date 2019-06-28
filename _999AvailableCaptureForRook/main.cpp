#include "Solution.h"

int main(int argc, char ** argv){
	vector<vector<char>> board = 
		{{'.','.','.','.','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','R','.','.','.','p'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','p','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.'}}; 

	cout<<Solution().numRookCaptures(board)<<endl;
	return 0;
}
