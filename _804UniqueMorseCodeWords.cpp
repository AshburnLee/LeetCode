//
// Created by junhui on 27/04/19.
//

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    // tiem: O(M*N) M:#words, N:#letters in one word   100.00%
    // space: O(len(word))    100.00%
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> uset;
        string morseList[26] = {".-","-...","-.-.","-..",
                              ".","..-.","--.","....",
                              "..",".---","-.-",".-..",
                              "--","-.","---",".--.",
                              "--.-",".-.","...","-",
                              "..-","...-",".--","-..-",
                              "-.--","--.."};
        for (string& word: words){
            string tmp;
            for (char& i:word){
                tmp += morseList[(int)i-97];
            }
            uset.insert(tmp);
        }
        return uset.size();
    }
};

int main(int argv, char** argc){
    vector<string> words = {"gin","zen", "gig","msg"};
    cout<<Solution().uniqueMorseRepresentations(words)<<endl;

    return 0;
}
