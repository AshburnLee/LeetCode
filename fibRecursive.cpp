#include <iostream>
#include <cassert>
#define VALUE 5

using namespace std;
int num = 0; // record how many times fib() is called

// recursive fib
int fib(int n) {
    assert(n>0);
    num ++;
    if (n == 1|| n == 2) return 1;
    return fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{

    cout<<"the value\t"<<"time to get the value\t"<<"times fib() is called"<<endl;
    // testing for calculating 10 fib value
    for (int i=1; i<=20; i++) {
        num = 0;
        time_t start = clock();
        int ret = fib(i*2);
        time_t end = clock();
        double duration = double(end - start)/CLOCKS_PER_SEC;
        cout<<ret<<"\t\t"<<duration<<"\t\t"<<num<<endl;
    }

    return 0;
}
