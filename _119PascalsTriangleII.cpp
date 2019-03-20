//
// Created by junhui on 20/03/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:

    //time: O(rowIndex^2)
    //space: O(rowIndex^2)
    vector<int> getRow(int rowIndex){
        vector<vector<int>> res(rowIndex+1);
        for (int i=0; i<rowIndex+1; i++){
            res[i].resize(i+1);

            res[i][0] = 1;
            for (int j=1; j<i; j++){
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
            res[i][i] = 1;
        }
        return res[rowIndex];
    }

//    Using Binomial Coefficients Recurrence Relationship
//    Using C(m, n) = (m - n + 1) / n * C(m, n - 1)
//    Time : O(rowIndex)
//    Space : O(rowIndex)

    vector<int> getRow2(int rowIndex) {
        vector<int> res(rowIndex + 1, 1);
        for(int i = 1; i <= (rowIndex + 1) / 2; i ++)
            res[i] = res[rowIndex - i] = (long long)(rowIndex - i + 1) * res[i - 1] / i;
        return res;
    }

};


int main(int argc, char** argv){
    vector<int> res = Solution().getRow2(6);
    for (auto _: res)
        cout<<_<<" ";
    cout<<endl;

    return 0;
}
