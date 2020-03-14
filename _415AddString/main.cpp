#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    string num1 = "14876";
    string num2 = "78";

//    int length1 = num1.size();
//    int length2 = num2.size();
//    if(length1!=length2){
//        int diff = abs(length1-length2);
//        length2 > length1 ? num1.insert(0, diff, '0') : num2.insert(0, diff, '0');
//    }

    cout<<num1<<" "<<num2<<endl;

    MySpace::Solution* sol = new MySpace::Solution();

    cout<<sol->addStrings("30", "12430")<<endl;
    cout<<sol->addStrings("124", "934")<<endl;

    return 0;
}