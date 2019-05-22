#include <iostream>
#include "FourSum1.h"
#include "FourSum2.h"
using namespace std;

int main() {
    vector<int> A = {-1,-1};
    vector<int> B = {-1,1};
    vector<int> C = {-1,1};
    vector<int> D = {1,-1};

    cout<<Solution1().fourSumCount(A,B,C,D)<<endl;
    cout<<Solution2().fourSumCount(A,B,C,D)<<endl;
    
    return 0;
}