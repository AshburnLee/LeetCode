#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome2(string s) {
        if (s.empty()||s.length() == 1)
            return true;
        // toLower(s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        erase(s);
        print(s);
        
        int l = 0;
        int r = s.length()-1;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else if(s[l]!=s[r]){
                return false;
            }
            
        }
        return true;
    }

    // the fianl solution
    bool isPalindrome(string s) {
        for(int l = 0,r=s.length()-1;l<r; l++,r-- ){
            while(isalnum(s[l])==false && l<r) l++;  //jump over non alnum
            while(isalnum(s[r])==false && l<r) r--;  //jump over non alnum
            if(tolower(s[l]) != tolower(s[r])) return false;
        }
        return true;
    }

    void print(string& str){
        for (std::string::iterator itr =str.begin(); itr != str.end(); itr++)
            cout<<*itr<<" ";
        cout<<endl;
    }

    // get rid of all spaces
    void erase(string& str){
        int index = 0;
        if( !str.empty())
        {
            while( (index = str.find(' ',index)) != string::npos)
            {
                str.erase(index,1);
            }
        }
    }
    // comvert all items to lower case
    void toLower(string& str){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;

    string str("s");



    cout<<sol.isPalindrome(str)<<endl;




    return 0;
}
