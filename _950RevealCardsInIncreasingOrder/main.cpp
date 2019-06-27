#include "Solution.h"

int main(int argc, char ** argv){
	vector<int> cards = {17,13,11,2,3,5,7};

	vector<int> res = Solution().deckRevealedIncreasing(cards);

	for (auto i: res)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
