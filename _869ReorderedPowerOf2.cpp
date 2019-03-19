//
// Created by junhui on 19/03/19.
//
#include <iostream>
#include <algorithm> //next_permutation(),  sort()
#include <vector>
#include <cmath>  //log2(), floor()

using namespace std;

class Solution{
public:
    bool reorderedPowerOf2(int N){
        // get all digits
        vector<int> digits = getDigits(N);
        sort(digits.begin(), digits.end());

        bool res = false;
        //permutation
        do{
            if(digits[0] == 0)
                continue; // jump out of this loop
            if (isPowerOf2(digits))
//                return true;
                res = true;  // for listing all possible solutions
        }while(next_permutation(digits.begin(), digits.end()));

        return res;
    }

//private:
    vector<int> getDigits(int N){
        vector<int> res;
        while (N){
            res.push_back(N%10);
            N/=10;
        }
        return res;
    }

    bool isPowerOf2(vector<int> vec){
        int num = 0;
        for (auto _:vec )
            num = num * 10 + _;
//        cout<<num<<" "<<log2(num)<<" "<<floor(log2(num))<<endl;
        return log2(num) == floor(log2(num));
    }
};

int main(int argc, char** argv){

    cout<<Solution().reorderedPowerOf2(1042)<<endl;

    return 0;
}