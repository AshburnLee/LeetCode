//
// Created by junhui on 30/03/19.
//
#include <iostream>
#include <cmath>
using namespace std;

class Solution{
public:
    // time: O(N)
    //space: O(1)
    int titleToNumber(string s) {
        int len = static_cast<int>(s.size());
        int sum = 0;
        for (int i=0;i<len;i++){
            sum += pow(26, (len-1-i)) * (int(s[i])-64);
        }
        return sum;
    }
};

int main(int argc, char** argv){
    string s = "ZY";
//    cout<<int(s[0])-64<<endl;
//    cout<<int(s[1])-64<<endl;

    cout<<Solution().titleToNumber(s)<<endl;

    return 0;
}
