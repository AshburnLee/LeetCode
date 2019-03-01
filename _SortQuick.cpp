#include <iostream>
#include <algorithm>

using namespace std;

// partition
int __partition(int arr[], int l, int r){
    int v = arr[l];
    int j = l;
    for (int i=l+1; i<=r; i++){
        if (arr[i] < v){
            swap(arr[j+1], arr[i]);
            j++;
        }
    }
    swap(arr[l],arr[j]);
    return j;
}

void __quickSort(int arr[], int l, int r){
    if (l>=r)
        return;
    int p = __partition(arr, l,r);
    __quickSort(arr, l, p-1);
    __quickSort(arr, p+1, r);
}

void entry(int arr[], int n){
    __quickSort(arr, 0, n-1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,3,8,2,5,3,6,4,9,10};
    entry(arr, 10);

    for (int _: arr)
        cout<<_<<" ";
    return 0;
}
