//
// Created by junhui on 05/04/19.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class Solution {
public:
    // time: O(N): N is the bits number of num in binary form
    // space: O(N)
    int findComplement(int num) {
        vector<int> binary;
        int y = 0; int res=0;
        while (num!=0){
            y=num%2;
            binary.push_back(y);
            num=num/2;
        }

        for (auto& i: binary)
            i = i == 0?1:0;

        int len = binary.size(); int rank=0;
        for (auto& i:binary)
            res += i * pow(2,rank++);
        return res;
    }
};

int main(int argc, char** argv){
    cout<<Solution().findComplement(5)<<endl;
    return 0;
}