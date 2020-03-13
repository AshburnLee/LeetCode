
#ifndef _43_SOLUTION_2_H_
#define _43_SOLUTION_2_H_

using namespace std;

class Solution2{
public:

    string multiply(string num1, string num2) {
        int length = num1.size() + num2.size();
        string res(length, '0');
        int begin=0;

        for(int i=num2.size()-1; i>=0; i--){
            int curr = num2[i]-'0';
            int index = length-num2.size()+i;
            int carry=0;
            int carry2=0;
            for(int j=num1.size()-1; j>=0; j--){
                int mul = curr*(num1[j]-'0');
                int remainder = mul%10;
                int tmpRes = carry + remainder + (res[index]-'0') + carry2;
                carry = mul/10;
                int remainder2 = tmpRes%10;
                carry2 = tmpRes/10;
                res[index--] = remainder2+'0';
            }
            if(carry!=0 || carry2!=0) {
                res[index] = carry + carry2 + '0';
                begin = index;
            }
            else begin = index+1;
        }
        return res[begin] == '0'? "0" :res.substr(begin);
    }
};


#endif
