#include <iostream>
#include <cassert>
#include <vector>

using namespace std;
int num = 0; // record how many times fib() is called
vector<int> memo; // store the calculated results

// recursive fib
int fib(int n) {
    assert(n>0);
    num ++;
    if (n == 1|| n == 2) return 1;
    if (memo[n] == -1) memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}

int main(int argc, char const *argv[])
{

    cout<<"the value\t"<<"time to get the value\t"<<"times fib() is called"<<endl;
    // testing for calculating 10 fib value
    for (int i=1; i<=21; i++) {
        num = 0;
        memo = vector<int>(i*2+1, -1); //set all elem as -1 as no value will be -1
        time_t start = clock();
        int ret = fib(i*2);
        time_t end = clock();
        double duration = double(end - start)/CLOCKS_PER_SEC;
        cout<<ret<<"\t\t"<<duration<<"\t\t"<<num<<endl;
    }


    return 0;
}
