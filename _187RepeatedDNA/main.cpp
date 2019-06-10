#include "Solution.h"
#include "Solution2.h"

using namespace std;

int main(int argc, char** argv){
				string s = "AAAAAGGGGGAAAAAGGGGGAAAAATTTCC";

				vector<string> res;
				res = Solution().findRepeatedDnaSequences(s);
				for (auto i:res)
								cout<<i<<endl;
				cout<<endl;

				vector<string> res2;
				res2 = Solution2().findRepeatedDnaSequences(s);
				for (auto i:res2)
								cout<<i<<endl;
				cout<<endl;
    return 0;
}
