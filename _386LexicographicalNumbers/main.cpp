#include <iostream>
#include "Solution1.h"
#include "Solution2.h"

using namespace std;

int main() {
    Solution2 sol;
    int in;
    cin>>in;
    vector<int> res = sol.lexicalOrder(in);

    for(auto item : res)
        cout<<item<<" ";
    cout<<endl;

    return 0;
}
