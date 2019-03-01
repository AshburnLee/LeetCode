#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0;
        int r = s.size()-1;
        for (;l<r;l++,r--){
            swap(s[l], s[r]);
        }
    }
};
void print(vector<char>& str){
    for (std::vector<char>::iterator itr =str.begin(); itr != str.end(); itr++)
        cout<<*itr<<" ";
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    vector<char> test = {'h','e','l','l','o'};

    Solution sol;
    sol.reverseString(test);
    print(test);
    return 0;
}
