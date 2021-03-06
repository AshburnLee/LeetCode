#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // mine
    void moveZeroesMine(vector<int>& nums){
        int k=-1; // [0,...,k) non-zero
        for (int i=0; i<nums.size(); i++){
            if (nums[i] != 0)
                swap(nums[i], nums[++k]);
            else
                continue;
        }
    }

    void moveZeroes(vector<int>& nums) {

        vector<int> nonZeros;  //def
        for (int i=0;i<nums.size();i++)
            if(nums[i])
                nonZeros.push_back(nums[i]);

        for (int i=0;i<nonZeros.size();i++)
            nums[i] = nonZeros[i];
        
        for (int i=nonZeros.size();i<nums.size();i++)
            nums[i] = 0;
    }
    // optimizised 1
    void moveZeroes2(vector<int>& nums){
        int k = 0;  //def
        int j = 0;  //def
        for (j;j<nums.size();j++){
            if (nums[j] == 0)
                continue;   
            else{
                nums[k++] = nums[j];
            }
        }
        for (k;k<nums.size();k++)
            nums[k] = 0;
    }
    // optimised 2
    void moveZeroes3(vector<int>& nums){
        int k = 0;  //def
        int j = 0;  //def
        for (j;j<nums.size();j++){
            if (nums[j] == 0)
                continue;   
            else{
                if(j!=k)  //只有此时才交换操作
                    swap(nums[k++], nums[j]);
                else
                    k++;
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    int arr[] = {0,1,0,3,12};
    vector<int> test(arr, arr+sizeof(arr)/sizeof(int));
    Solution().moveZeroesMine(test);
    for (int i=0;i<test.size();i++)
        cout<<test[i]<<" ";
    cout<<endl;
    return 0;
}
