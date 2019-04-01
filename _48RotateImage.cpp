//
// Created by junhui on 01/04/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // time: O(n/2 * (n-1)) O(n^2)
    // space: 0
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        for (int j=n, k=0; j>0, k<n/2; j-=2, k++){
            func2(matrix, j, k);
        }
    }
private:
    // 3*3=9 assign operations
    void func(vector<vector<int>>& matrix, int n, int k){
        for (int i=0;i<n-1;i++){
            swap(matrix[k][i+k], matrix[n-1-i+k][k]);
            swap(matrix[n-1-i+k][k], matrix[n-1+k][n-1-i+k]);
            swap(matrix[n-1+k][n-1-i+k], matrix[i+k][n-1+k]);
        }
    }

    // 5 assign operations
    void func2(vector<vector<int>>& matrix, int n, int k){
        int tmp;
        for (int i=0;i<n-1;i++){
            tmp = matrix[k][i+k];
            matrix[k][i+k] = matrix[n-1-i+k][k];
            matrix[n-1-i+k][k] = matrix[n-1+k][n-1-i+k];
            matrix[n-1+k][n-1-i+k] = matrix[i+k][n-1+k];
            matrix[i+k][n-1+k] = tmp;
        }
    }
};

void printMat(vector<vector<int>> mat){
    int n = mat[0].size();
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}

vector<vector<int>> createMat(int n){
    vector<vector<int>> mat(n, vector<int>(n, 0));
//    Solution().printMat(mat);
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            mat[i][j] = (i+1)*(j+2);
    }
    return mat;
}

int main(int argc, char** argv){

    Solution sol;
//    int n;
//    cout<<"Input the rank of a matrix: ";
//    cin>>n;
    vector<vector<int>> mat = createMat(6);
    printMat(mat);
    sol.rotate(mat);
    cout<<endl;
    printMat(mat);
    return 0;
}

