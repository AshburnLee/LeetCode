#ifndef MAIN_CPP_SOLUTION_H
#define MAIN_CPP_SOLUTION_H

#include <vector>
#include <unordered_map>

using namespace std;

namespace MySpace{

    void printRes(){}

    class Solution {
    public:
        string addStrings(string num1, string num2) {
            int length1 = num1.size();
            int length2 = num2.size();

            if(length1 != length2){
                int diff = abs(length1-length2);
                length2 > length1 ? num1.insert(0, diff, '0') : num2.insert(0, diff, '0');
            }
            int length = num1.size() + 1;
            string res(length,'0');
            int carry=0;
            for(int i=length-2;i>=0;i--){

                int sum = (num1[i]-'0') + (num2[i]-'0') + carry;
                carry = sum / 10;
                int remainder = sum % 10;
                res[i+1] = remainder + '0';
            }
            if (carry) res[0] = carry+'0';

            return res[0]=='0' ? res.substr(1) : res;
        }
    };
}

#endif //MAIN_CPP_SOLUTION_H