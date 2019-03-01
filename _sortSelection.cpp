#include <iostream>
#include <vector>

using namespace std;

// O(n^2)
// O(1)
void selectionSort(vector<int>& nums){
    for (int i=0;i<nums.size();i++){
        int minIndex = i;
        for (int j=i+1; j<nums.size();j++){
            if (nums[j] < nums[minIndex])
                minIndex = j;  
        }
        swap(nums[i], nums[minIndex]);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> test ={2,7,3,4,9,1};
    selectionSort(test);
    for (int _: test) cout<<_<<" ";
    cout<<endl;
    
    return 0;
}
