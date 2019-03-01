#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    // brutal force, it can solve the problem no matter
    // the array is sorted or not.
    // O(n^2)
    vector<int> twoSum2(vector<int>& numbers, int target) {
        vector<int> store(0);
        for (int i = 0;i<numbers.size();i++){
            for (int j = i+1; j<numbers.size(); j++){
                if (numbers[i] + numbers[j] == target){
                    store.push_back(i+1);
                    store.push_back(j+1);
                }
            }
        }
        return store;
    }

    // use the advantage of "sorted"
    // binary seach
    // ????????????????????????????
    // O(n*logn)
    vector<int> twoSum3(vector<int>& numbers, int target){
        vector<int> store(2);
        for (int i=0; i<numbers.size(); i++){
            // binary search
            int l = i+1;  //def index
            int r = numbers.size()-1; //def index
            while (l<=r){
                int mid = l+(r-l)/2;
                if(numbers[mid] == target-numbers[i]){
                    store.push_back(mid);
                    store.push_back(i);
                }
                if(target-numbers[i] > numbers[mid])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
    }

    // 对撞指针 
    // O(n)
    vector<int> twoSum(vector<int>& numbers, int target){
        assert(numbers.size() >= 2);
        vector<int> store(0);
        int i = 0;
        int j = numbers.size() -1;
        while(i <  j){
            if(numbers[i] + numbers[j] == target){
                store.push_back(i+1);
                store.push_back(j+1);
                return store;
            }
            if(numbers[i] + numbers[j] < target) i++;
            if(numbers[i] + numbers[j] > target) j--;
        }
        throw invalid_argument("no solution");
    }
};

int main(int argc, char const *argv[])
{
    vector<int> test = {1,3,6,7,10};
    vector<int> res(2);
    Solution sol;
    res = sol.twoSum(test, 13);
    for (int _ : res)
        cout<<_<<" ";
    cout<<endl;

    return 0;
}
