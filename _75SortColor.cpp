#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

class Solution {
public:

    void sortColors(vector<int>& nums) {
        int count[3] = {0};
        if (nums.size() == 0)
            cout<<"empty vector";
        for (int i=0;i<nums.size(); i++){
            if (nums[i] == 0)
                count[0] ++;
            else if (nums[i] == 1)
                count[1] ++;
            else
                count[2]++;
        }

        int index = 0; 
        for (int i=0; i<count[0]; i++)
            nums[index++] = 0;            
        for (int i=0; i<count[1];i++)
            nums[index++] = 1;
        for (int i=0; i<count[2];i++)
            nums[index++] = 2;
    }

    // 3-way quick sort
    void sortColors2(vector<int>& nums){
        int zero = -1; //def
        int two = nums.size();   //def
        for (int i=0; i<two; ){
            if(nums[i] == 1) i++;
            else if(nums[i] == 2) {
                swap(nums[--two], nums[i] );
            }else {
                assert( nums[i] == 0 );
                swap(nums[++zero], nums[i++]);
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<int> test = {2,0,2,1,2,1,1,2,2,1,0};
    Solution sol;
    sol.sortColors2(test);
    for (int n: test)
        cout<<n<<" ";
    cout<<endl;
    return 0;
}
