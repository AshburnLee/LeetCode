//
// Created by junhui on 06/05/19.
//

/*
 * input = {{1,2,3},{4,5,6} }
 * ouput all combinations from input[0] & input[1]
 * */

#include <iostream>
#include <vector>
using namespace std;

class Solution{
private:
    vector<vector<int>> res;

    /* s is not const */
    void getCombination(vector<vector<int>>& input, int index, vector<int>& s){
        if (index == input.size()){
            res.push_back(s);
            return;
        }

        vector<int> c = input[index];

        for (int i=0; i<c.size(); i++){
            s.push_back(c[i]);
            getCombination(input, index+1, s);
            s.pop_back();
        }
        return;
    }

public:
    vector<vector<int>> allCombinations(vector<vector<int>>& input){
        vector<int> s;
        getCombination(input, 0, s);
        return res;
    }

    void printRes(){
        for(vector<int>& i: res){
            for (int & ii: i)
                cout<<ii<<" ";
            cout<<endl;
        }

    }

};

int main(int argc, char** argv) {
    vector<vector<int>> input = {{1,2,3},{4,5,6}};
    Solution sol;

    vector<vector<int>> res = sol.allCombinations(input);

    sol.printRes();

    return 0;
}

