#ifndef _43_SOLUTION_1_H_
#define _43_SOLUTION_1_H_
#include <vector>

using namespace std;

class Solution1{
public:
     string multiply(const string& num1, const string& num2) {

        vector<int> numVec1 = parseString(num1);
        vector<int> numVec2 = parseString(num2);

        uint64_t res = 0;
        for(auto i:numVec1) {
            for (auto j:numVec2)
                res += i * j;
        }
        string str = parseInteger(res);
        return str;
    }

    vector<int> parseString(const string& num){
        vector<int> res;
        if(num.length()==1 && num[0]=='0' ){
            res.push_back(0);
            return res;
        }
        int bit=1;

        for(int i=num.size()-1; i>=0; i--){
            int digit = (num[i]-'0')*bit;
            res.push_back(digit);
            bit*=10;
        }
        return res;
    }

    string parseInteger(uint64_t num){
        string res="";

        int remainder;
        if(num==0) return "0";
        while(num!=0){
            remainder = num%10;
            res.insert(0,1, (remainder+'0'));
            num = num/10;
        }
        return res;
    }
};



#endif
