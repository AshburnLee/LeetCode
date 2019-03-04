#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution {
public:
    // O(n^2)
    // O(1)
    int maxProfit2(vector<int>& prices) {
        if (prices.size()==0||prices.size()==1)
            return 0;
        
        int ear = 0;
        // buy: from 0 to size-2
        for (int buy=0; buy<prices.size()-1; buy++){
            //sell: from buy+1 to size-1
            for (int sell =buy+1; sell<prices.size(); sell++){
                ear = max(ear, prices[sell] - prices[buy]);
            }
        }
        return ear;
    }
    //O(n)
    //O(1)
    int maxProfit(vector<int>& prices) {
        int maxPrice = 0;
        int minPrice = INT_MAX;
        for (auto i : prices){
            if (i < minPrice)
                minPrice = i;
            else if (i - minPrice > maxPrice)
                maxPrice = i - minPrice;
        }
        return maxPrice;
    }
};


// static int fast_io = []() {
//   std::ios::sync_with_stdio(false);
//   return 0;
// }();



int main(int argc, char const *argv[])
{
    int dataset[] = {7,1,2,3,4,5,6,8};
    vector<int> prices(dataset, dataset + sizeof(dataset)/sizeof(int));

    cout<<"solution: "<<Solution().maxProfit(prices)<<endl;
    return 0;
}
