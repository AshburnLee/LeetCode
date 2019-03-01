#include <iostream>

using namespace std;

void Bubble(int* arr, int n){
    for (int i=0;i<n;i++)
        for (int j=0;j<n-1-i;j++)
            if (arr[j+1] < arr[j] && j+1 < n )
                swap(arr[j], arr[j+1]);

}

int main(){

    int arr[] = {3,7,2,5,1,4};
    Bubble(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
