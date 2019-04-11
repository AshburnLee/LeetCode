//
// Created by junhui on 11/04/19.
//
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    // time: O(R*C)
    // space: O(2*R*C)
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        // if r*c is not valid
        if (nums.size() * nums[0].size() != r*c)
            return nums;

        // flatten nums
        vector<int> flattened = flatten(nums);

        // reshape
        vector<vector<int>> after = flatten2mat(flattened, r, c);

        return after;
    }

private:
    vector<int> flatten(vector<vector<int>> mat){
        int r = mat.size();
        int c = mat[0].size();
        vector<int> tmp(r*c, 0);
        int k=0;

        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                tmp[k++] = mat[i][j];
            }
        }

        return tmp;
    }

    vector<vector<int>> flatten2mat(vector<int> fln, int r, int c){
        vector<vector<int>> res(r, vector<int>(c, 0));
        int k=0;

        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                res[i][j] = fln[k++];
            }
        }

        return res;
    }
};

vector<vector<int>> createMat(int r, int c){
    vector<vector<int>> mat(r, vector<int>(c, 0));
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            mat[i][j] = (i+1)+j+1;
    }
    return mat;
}

void printMat(vector<vector<int>> mat){
    int r = mat.size();
    int c = mat[0].size();
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}


int main(int argc, char** argv){
    vector<vector<int>> mat = createMat(3,4);
    printMat(mat);

    vector<vector<int>> res = Solution().matrixReshape(mat, 2, 6);

    printMat(res);


    return 0;
}
