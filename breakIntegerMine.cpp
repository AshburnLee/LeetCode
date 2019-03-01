#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

class BreakIntegerMine {
private:
    // find the max item in a vector
    int findMax(vector<int> tmp) {
        vector<int>::iterator max = max_element(std::begin(tmp), std::end(tmp));
        return *max;
    }
public:
    int MaxProduct (int n) {
        vector<int> memo(n+1, -1);
        
        memo[1] = 1;
        // 分别计算n=2,3,4,...,n
        for (int i=2; i<=n; i++) {
            // 对每一个n, 求其所有的可能值, 存入tmp
            vector<int> tmp(i, -1);
            for (int k = 1; k<i; k++) {
                tmp[k] = max(k*(i-k), k*memo[i-k]); 
            }
            // find the max in tmp and return it to memo[i]
            memo[i] = findMax(tmp); 
        }
        return memo[n];   
    }
};

int main(int argc, char const *argv[])
{
    BreakIntegerMine* br = new BreakIntegerMine();

    for (int i=5; i<20000; i*=2) {
        time_t start = clock();
        int ret = br->MaxProduct(i);
        time_t end = clock();
        double duration = double(end - start)/CLOCKS_PER_SEC;
        cout<<ret<<"\t\t"<<duration<<"\t\t"<<endl;
    }

    return 0;
}

