#include <iostream>
#include <vector>
#include "Solution1.hpp"
#include "Solution2.hpp"

using namespace std;

int main(){

    string num1 = "15789";
    string num2 = "9321";

    Solution1* sol1 = new Solution1();
    string res1 = sol1->multiply(num1, num2);
    cout<<res1<<endl;

    Solution2* sol2 = new Solution2();
    string res2 = sol2->multiply(num1, num2);
    cout<<res2<<endl;


    return 0;
}
