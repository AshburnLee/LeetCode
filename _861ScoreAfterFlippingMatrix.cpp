//
// Created by junhui on 22/03/19.
//

#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

class Solution{
public:
    // time: O(n*m)
    // space: O(1)
    int matrixScore(vector<vector<int>>& A) {
        int sum = 0;
        // turn over rows
        for (int r=0; r<A.size(); r++) {
            if (A[r][0] == 0)
                func1(A[r]);
        }

        // turn over column
        for (int i=1; i<A[0].size(); i++){
            if (func2(A, i))
                func3(A, i);
            else
                continue;
        }
        
        // result
        for (auto& _: A)
            sum += b2d(_);

        return sum;
    }

private:
    // turn over one row
    void func1(vector<int>& rc ){
        for (auto& _:rc){
            if (_ == 1)
                _ = 0;
            else if (_ == 0)
                _= 1;
        }
    }

    // weather the number of '1' is more than the number of '0'
    bool func2(vector<vector<int>>& cl, int c){
        map<int, int> mp;
        for (auto& _: cl)
            mp[_[c]]++;

        return (mp.find(1)->second < mp.find(0)->second);

    }
    // turn over one column
    void func3(vector<vector<int>>& cl, int c){
        for (auto& _ : cl){
            if (_[c] == 0)
                _[c] = 1;
            else if(_[c] == 1)
                _[c] = 0;
        }
    }

    // b2d()
    int b2d(vector<int> vec){
        int len = vec.size()-1;
        int sum = 0;
        for (int i=0; i<vec.size(); i++){
            sum += vec[i]*pow(2, len-i);
        }
        return sum;
    }

};

void printMat(vector<vector<int>>& mat ){
    for (auto& _: mat) {
        for (auto &__:_)
            cout << __ << " ";
        cout << endl;
    }
}


int main(int argc, char** argv){
    vector<vector<int>> mat = {{0,0,1,1},
                               {1,0,1,0},
                               {1,1,1,0},
                               {1,1,0,1},
                               {0,1,1,0}};

    printMat(mat);
    cout<<Solution().matrixScore(mat)<<endl;
    printMat(mat);



    return 0;
}