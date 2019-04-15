//
// Created by junhui on 15/04/19.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    vector<vector<int>> mat;
public:
    // time limit exceeded,
    // constructing & maintaining the matrix M is time consuming, which is redundant
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.empty())
            return m*n;

        // init the mat
        mat.resize(m);
        for (int i=0; i<m; i++){
            mat[i].resize(n);
        }

        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                mat[i][j] = 0;
            }
        }

        // update items
        for (int i=0; i<ops.size(); i++){
            addOnes( ops[i] );
        }

        return maxValue();
    }

    void addOnes( vector<int>& ope ){
        for (int i=0; i<ope[0]; i++){
            for (int j=0;j<ope[1]; j++){
                mat[i][j] ++ ;
            }
        }
    }

    int maxValue(){
        int res = 0;
        int count=0;
        for (auto& i:mat){
            for (auto& ii: i){
                res = max(res, ii);
            }
        }
        for (auto& i:mat){
            for (auto& ii:i){
                if (ii == res)
                    count++;
            }
        }
        return count;
    }

//    void printMat(){
//        for (int i=0; i<mat.size(); i++){
//            for (int j=0;j<mat[0].size(); j++){
//                cout<<mat[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//    }
};

int main(int argc, char** argv){

    Solution sol;
    vector<vector<int>> ops = {{19999,19999}};

    cout<<sol.maxCount(39999,39999, ops)<<endl;
//    sol.printMat();
    return 0;
}