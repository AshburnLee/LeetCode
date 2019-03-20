//
// Created by junhui on 20/03/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:

    // time: O(n)
    // space: O(n)
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%nums.size();

        vector<int> tmp(nums.begin(), nums.end());
        for (int i=n-1; i>= n-k; i--)
            nums[k-(n-i)] = tmp[i];
        for (int i=0; i<n-k; i++)
            nums[k+i] = tmp[i];
    }

    //time: O(n)
    //space: O(1)
    // brilliant
    void rotate2(vector<int>& nums, int k) {

        k %= nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }

//private:
    void reverse(vector<int>& nums, int start, int end){
        for(int i = start, j = end; i < j; i ++, j --)
            swap(nums[i], nums[j]);
    }
};

int main(int argc, char** argv){
    vector<int> test = {1,2,3,4,5,6,7};

    Solution().reverse(test, 0, test.size()-1);

    for(auto _: test)
        cout<<_<<" ";
    cout<<endl;

    Solution().rotate(test, 8);

    for(auto _: test)
        cout<<_<<" ";
    cout<<endl;

    return 0;
}

