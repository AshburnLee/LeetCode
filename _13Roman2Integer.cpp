//
// Created by junhui on 17/03/19.
//

#include <iostream>
#include <unordered_map>

using namespace std;

// time: O(n)
// space: O(7)
// the key to this problem:
// 1) the input roman numerals are valid;
// 2) Roman numerals are usually written largest to smallest from left to right
class Solution{
public:
    int romanToInt(string s){
        // symbol and value combination
        unordered_map<char, int> mp = {{'I', 1},
                                       {'V', 5},
                                       {'X', 10},
                                       {'L', 50},
                                       {'C', 100},
                                       {'D', 500},
                                       {'M', 1000}};

        int sum = mp[s.back()];
        for (int i=s.length() - 2; i>=0; i--){
            if (mp[s[i]] < mp[s[i+1]])
                sum = sum - mp[s[i]];
            else
                sum = sum + mp[s[i]];
        }
        return sum;
    }
};

int main(){
    cout<<Solution().romanToInt("XXIVI")<<endl;
    return 0;
}