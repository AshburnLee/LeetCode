#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // time: O(n^2)
    // space: O(n)
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> row;
        for(int i = 0; i < numRows; i++){
            // each item in res
            row.push_back(1);
            for(int j = i - 1; j > 0; j--){
                row[j] = row[j - 1] + row[j];
            }
            res.push_back(row);
        }
        return res;
    }
    // time: O(n^2)
    // space: O(n^2)
    vector<vector<int>> generate2(int numRows){
        vector<vector<int>> res(numRows);
        for( int i=0;i<numRows; i++ ){
            res[i].resize(i+1);

            res[i][0] = 1;
            for (int j=1;j<i; j++)
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            res[i][i] = 1;
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    vector<vector<int>> res;
    res = Solution().generate2(3);

    return 0;
}
