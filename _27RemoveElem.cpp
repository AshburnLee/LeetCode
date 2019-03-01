#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // original
    int removeElement(vector<int>& nums, int val) {
        vector<int> nonVal;
        for (int i=0;i<nums.size();i++)
            if(nums[i]!=val)
                nonVal.push_back(nums[i]);
        for (int i=0;i<nonVal.size();i++)
            nums[i] = nonVal[i];
        
        return nonVal.size();
    }

    // optimised 1
    int removeElement2(vector<int>& nums, int val) {
        int i = 0;  //def
        int j = 0;  //def
        for (i;i<nums.size();i++){
            if(nums[i] != val)
                if(i!=j)
                    nums[j++] = nums[i];
                else
                    j++;
            else
                continue;
        }
        return j;
    }

    // optimised 2
    int removeElement3(vector<int>& nums, int val) {
        int i = 0;  //def
        int j = 0;  //def
        for (i;i<nums.size();i++){
            if(nums[i] != val)
                if(i!=j)
                    swap(nums[j++], nums[i]);
                else
                    j++;
            else
                continue;
        }
        return j;
    }
};

int main(int argc, char** argv){
    vector<int> test = {0,1,2,3,2,2,4,2,4};

    Solution sol;
    cout<<sol.removeElement3(test,2)<<endl;
}