#include "Solution.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv){
    // Ö´ÐÐ£º$ ./a.out "{[()]}"
    string S = argv[1];

    Solution* sol = new Solution();

    string resS = sol->removeOutermostParentheses(S);
    
    for(auto i:resS) cout<<i<<" ";
    cout<<endl;
    return 0;

}
