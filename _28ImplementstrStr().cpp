//
// Created by junhui on 17/03/19.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // time: O((m-n)*n)
    int strStr(string haystack, string needle) {
        int res = -1;

        // exceptions
        if ( haystack.size() < needle.size() )
            return res;
        if (haystack.size() == 0 && needle.size() == 0)
            return 0;
        if (needle.size() == 0)
            return 0;

        // main logic
        for (int j=0;j < haystack.size()-needle.size()+1; j++){

            int k;
            int count = 0;

            for (int i=0, k=j; i < needle.size(), k < j + needle.size(); k++,i++){
                if ( needle[i] != haystack[k] ){
                    break;
                }
                else if (needle[i] == haystack[k]){
                    count ++;

                }
                if(count == needle.size() ){
                    res = j;
                    return res;
                }
            }
        }
        return res;
    }
};

int main(int argc, char** argv){
    string haystack="a";
    string needle = "a";
    int res = Solution().strStr(haystack, needle);
    cout<<res<<endl;
    return 0;
}