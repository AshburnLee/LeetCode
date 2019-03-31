//
// Created by junhui on 31/03/19.
//
#include <iostream>
using namespace std;

class Solution{
public:
    bool isUgly(int num) {
        if (num<=0 || num==1) return false;
        while(num>0){
            if (num%2==0) num/=2;
            else if(num%3==0) num/=3;
            else if (num%5==0) num/=5;
            else return num == 1;
        }
        throw invalid_argument("No solution");

    }

    // optimize the above
    bool isUgly2(int num){
        if (num<=0 || num==1)
            return false;
        while (num%2==0) num/=2;
        while (num%3==0) num/=3;
        while (num%5==0) num/=5;

        return num==1;
    }
};

int main(int argc, char** argv){
    cout<<Solution().isUgly2(7)<<endl;
    return 0;
}
