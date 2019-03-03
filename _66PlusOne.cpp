#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res(digits);
        for (int i=res.size()-1; i>=0;i--){
            if(res[i] == 9)
                res[i] = 0;
            else{  // one digit is not a '9'
                res[i]++;
                return res;
            }
        }
        // when all digit are '9'
        res[0] = 1;
        res.push_back(0);
        return res;
    }
};


void plusOne(vector<int> &digits)
{
	int n = digits.size();
	for (int i = n - 1; i >= 0; --i){
		if (digits[i] == 9) 
			digits[i] = 0;

		else{  // when one digit is not '9'
			digits[i]++;
			return;
		}
	}
    // when all digits are '9'
	digits[0] =1;
	digits.push_back(0);
}

int main(int argc, char const *argv[])
{
    int myints[] = {9,9,8,9};
    vector<int> test (myints, myints + sizeof(myints) / sizeof(int) );
    vector<int> res = Solution().plusOne(test);


    for (int _: res)
        cout<<_<<" ";
    cout<<endl;

    return 0;
}


