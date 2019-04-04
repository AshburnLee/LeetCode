//
// Created by junhui on 04/04/19.
//
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Solution{
public:
    // intuitive way, compute only the odd numbers except number '2'
    // time: O(N^2)
    //space: O(1)
    int countPrimes(int n){
        int count=1;
        for (int i=3; i<n; i+=2){
            if (prime(i))
                count++;
        }
        return count;
    }


    // non-prime numbers can be devide into two numbers, 100%,
    // so set all non-prime numbers as false, count--
    // time: O(NlogN)
    // space: O(N)
    int countPrimes2(int n) {
        if(n <= 2) return 0;
        if(n == 3) return 1;

        vector<bool> prime(n, true);
        int i=0,j=0;
        int count = n-2;
        int rt = sqrt(n);

//        cout<<rt<<endl;
        cout<<"**************"<<endl;

        for(i = 2; i <= rt; i++){
//            cout<<"i:   "<<i<<endl;
            if (prime[i])
                for(j=i*i ; j<n ; j+=i){
//                    cout<<"j:"<<j<<endl;
                    if (prime[j]){
                        prime[j]=false;
                        count--;
                    }
                }
//            cout<<"**************"<<endl;
            }
//        cout<<"*************"<<endl;
        return count;
    }


private:
    bool prime(int a) {
        for (int i=2; i<a; i++)
            if (a%i == 0)
                return false;

        return true;
    }

};

int main(int argc, char** argv){
    cout<<Solution().countPrimes2()<<endl;
    return 0;
}