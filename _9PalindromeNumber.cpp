//
// Created by junhui on 24/03/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    //time: O(N), N: the numbers of digits
    //space: O(N)
    bool isPalindrome2(int x) {
        if (x<0 ) return false;
        if (x == 0) return true;

        vector<int> vec;
        int yu = -1;
        while(x != 0){

            yu = x%10;
            cout<<yu<<" ";
            vec.push_back(yu);
            x = x/10;
        }

        for (int i=0;i<vec.size()/2; i++){
            if (vec[i] != vec[vec.size()-1-i])
                return false;
        }
        return true;

    }

    bool isPalindrome(int x) {
        if (x<0 || (x % 10 == 0 && x != 0))
            return false;
        int rev = 0;
        while (x > rev){
            rev = rev *10 + x % 10;
            x = x / 10;
        }
        return rev == x || rev / 10 == x;
    }
};

int main(int argc, char** argv){
    cout<<Solution().isPalindrome(-2321)<<endl;
    return 0;
}
