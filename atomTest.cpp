#include <iostream>
#include <vector>

using namespace std;

// def merge for arr[l,...mid] & arr[mid+1,...r]
void __merge(int arr[], int l, int mid, int r){
    // tmp space
    int aux[r-l+1];
    for(int i=l; i<=r;i++){
        aux[i-l] = arr[i];
    }

    int i=l,j=mid+1;
    for (int k=l;k<=r;k++){
        // 1) check index bound crossing
        if (i > mid){
            arr[k] = aux[j-l];
            j++;
        }else if (j>r){
            arr[k] = aux[i-l];
            i++;
        }
        // 2) now i,j are valid
        else if (aux[i-l] < aux[j-l]){
            arr[k] = aux[i-l];
            i++;
        }
        else{
            arr[k] = aux[j-l];
            j++;
        }
    }
}

//def recursion, sort for arr[l,...,r]
void __mergeSort(int arr[], int l, int r ){
    if(l>=r)
        return;

    int mid = (l+r)/2;
    __mergeSort(arr,l,mid);
    __mergeSort(arr,mid+1, r);
    __merge(arr, l, mid, r);

}

void  mergeSort(int arr[], int n) {
    __mergeSort(arr, 0, n-1);

}


int main(int argc, char const *argv[]) {
    int arr[] = {2,3,4,5,6,1,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, n);
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;



}
