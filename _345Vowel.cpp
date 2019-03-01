#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // bug????????????
    string reverseVowels2(string s) {
        for(int i=0,j=s.length()-1; i<j; i++,j--){
            while((s[i] != 'a'|| s[i] != 'e'|| s[i] != 'i'|| s[i] != 'o'|| s[i] != 'u') && i<j) i++;
            while((s[j] != 'a'|| s[j] != 'e'|| s[j] != 'i'|| s[j] != 'o'|| s[j] != 'u') && i<j) j--;
            swap(s[i],s[j]);
        }
        return s;
    }

    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);
            if(i<j)
                swap(s[i++], s[j--]);
        }
        return s;
    }
};
void print(string& str){
    for (std::string::iterator itr =str.begin(); itr != str.end(); itr++)
        cout<<*itr<<" ";
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    string s("leetcode");
    print(s);
    Solution sol;
    string s2 = sol.reverseVowels(s);
    print(s2);
    return 0;
}


// || s[j] != 'A'|| s[j] != 'E'|| s[j] != 'I' || s[j] != 'O'|| s[j] != 'U'
//