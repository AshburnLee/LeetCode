#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

template <typename T>
int binarySearch(T arr[], int n, T target) {
    int l = 0;    // def
    int r = n-1;  //def
    while(l<=r){
        // int mid = (l+r)/2;   //def  // 整形溢出
        int mid = l+(r-l)/2;   //def  // 不会整形溢出
        if(arr[mid]==target)
            return mid;
        if(target > arr[mid])
            l = mid +1;    // def
        else
            r = mid -1;    //def

    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int* arr = new int[100];
    for (int i=0;i<100; i++){
        arr[i] = i; 
    }

    cout<<binarySearch(arr, 100, 99)<<endl;
    
    return 0;
}
