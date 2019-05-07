//
// Created by junhui on 07/05/19.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    // time: O(1)  100.00%
    // space O(1)   100.00%
    bool isBoomerang(vector<vector<int>>& points) {
        return (!onLines(points)) && (differentPoint(points));
    }

private:
    /* all points are on the same line */
    bool onLines(vector<vector<int>>& points){
        return (points[1][1]-points[0][1])*(points[2][0]-points[1][0])==(points[2][1]-points[1][1])*(points[1][0]-points[0][0]);
    }

    /* all points are different */
    bool differentPoint(vector<vector<int>>& points){   
        return (points[0]!= points[1] && points[1]!= points[2] && points[0]!= points[2]);
    }
};

int main(int argc, char** argv){
    vector<vector<int>> points = {{1,1},{2,2},{3,3}};
    cout<<Solution().isBoomerang(points)<<endl;

    vector<vector<int>> points2 = {{1,1},{3,2},{2,3}};
    cout<<Solution().isBoomerang(points2)<<endl;
    return 0;
}