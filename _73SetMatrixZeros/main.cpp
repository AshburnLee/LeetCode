#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;

void printMatrix(vector<vector<int>>& matrix){
    for (auto i:matrix){
        for (auto ii: i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[]){

    vector<vector<int>> matrix ={{0,1,2,2},
                                 {2,3,4,2},
                                 {4,5,9,7}};
    Solution().setZeroes(matrix);
    printMatrix(matrix);

    return 0;
}
