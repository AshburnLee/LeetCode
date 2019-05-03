//
// Created by junhui on 03/05/19.
//

#include <iostream>
#include <vector>
using namespace std;

/**
 * {"1234","5678"}get x from "1234", and y from "5678"
 * find all the combinations
 */
class Solution{
private:
    vector<string> res;
    void findCombination(const vector<string>& input, int index, const string& s){
        if (index == input.size()){
            res.push_back(s);
            return;
        }
        string c = input[index];

        for (int i=0; i<c.size(); i++){
            findCombination(input, index+1, s+c[i]);
        }
        return;

    }

public:
    // time: O(2^N)
    // space: O(N)
    vector<string> numberCombinations(vector<string> input) {
        if (input.size()==0){
            return res;
        }
        findCombination(input, 0, "");
        return res;
    }

};

int main(int argc, char** argv){
    vector<string> input = {"1234","5678"};
    vector<string> res = Solution().numberCombinations(input);

    for (auto& _: res)
        cout<<_<<" ";
    cout<<endl;
    return 0;
}