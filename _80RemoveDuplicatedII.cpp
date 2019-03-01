#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // return the right length
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;

        int count = 0;  // def
        int j = 0;    //def
        for (int i=1; i<=nums.size();i++){
            if(nums[i] != nums[j]){
                if(i-j>=2) count += 2;
                else count += 1;
                j=i;
            }
        }
        return count;
    }

    int removeDuplicates2(vector<int>& nums){
        if (nums.size() <= 2)
            return nums.size();
        
        int k = 2;
        for (int i=2; i<nums.size(); i++){
            if(nums[i]!=nums[k-2])
                if(i!=k)
                    nums[k++] = nums[i];
                else 
                    k++;
        }
        return k;
    }
};

int main(int argc, char ** argv){
    vector<int> test = {1,1,1,2,2,3};
    Solution sol;
    cout<<sol.removeDuplicates2(test)<<endl;

}