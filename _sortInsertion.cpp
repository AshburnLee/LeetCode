#include <iostream>
#include <vector>

using namespace std;

// O(n^2)
// O(1)
void insertionSort2(vector<int>& nums){
    for (int i=1;i<nums.size();i++){
        for (int j=i;j>=0;j--){
            if (nums[j]<nums[j-1] && j-1>=0)  // right, 为了更简洁, 修改for中边界
                swap(nums[j], nums[j-1]);
        }
    }
}

// O(n^2) O(1)
void insertionSort(vector<int>& nums){
    for (int i=1;i<nums.size();i++){
        for (int j=i;j>0;j--){
            if (nums[j]<nums[j-1])  
                swap(nums[j], nums[j-1]);
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> test ={2,7,3,4,9,1};
    insertionSort(test);
    for (int _: test) cout<<_<<" ";
    cout<<endl;
    
    return 0;
}