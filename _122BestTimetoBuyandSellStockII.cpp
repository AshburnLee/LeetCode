//
// Created by junhui on 20/03/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    //time: O(N)
    //space: O(1)
    int maxProfit(vector<int>& prices) {
        int res=0;
        for (int i =0;i<prices.size(); i++){
            if (i+1 < prices.size() && prices[i+1] > prices[i] && i+1<prices.size())
                res += prices[i+1] - prices[i];
        }
        return res;
    }
};

int main(int argc, char** argv){
    vector<int> test={7,1,5,3,6,4};
    cout<<Solution().maxProfit(test)<<endl;
    return 0;
}