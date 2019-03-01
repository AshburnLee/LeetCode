#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[127] = {0};  // frequency
        int l=0;
        int r=-1;
        int res=0;
        while(l<s.size()){
            if (freq[s[r+1]] == 0 && r+1<s.size()){
                r++;
                freq[s[r]] ++;
            }else{
                freq[s[l]] --; 
                l++; 
            }
            res = max(res, r-l+1);             
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    string str("abcabcbb");
    cout<<sol.lengthOfLongestSubstring(str)<<endl;
    return 0;
}
