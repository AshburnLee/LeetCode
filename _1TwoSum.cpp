#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // flaw
    vector<int> twoSum2(vector<int>& nums, int target) {
        // store item to a map
        std::unordered_map<int, int> record;
        for (int i=0;i<nums.size();i++)
            record[nums[i]] = i;   // 
        
        vector<int> res;
        for (int i=0;i<record.size(); i++)
            if (nums[i] < target)
                if (record.find(target-nums[i]) != record.end()){
                    res.push_back(i);
                    res.push_back(record[target-nums[i]]);
                    break;
                }
        return res;        
    }

    // final 
    vector<int> twoSum(vector<int>& nums, int target){
        std::unordered_map<int, int> record;
        for (int i=0;i<nums.size();i++){
            // nums[i] is in the record
            if (record.find(target - nums[i]) != record.end()){
                int res[2] = {record[target-nums[i]], i};
                return vector<int>(res, res+2);
            }
            else// nums[i] is not in the record
                record[nums[i]] = i;
        }
        throw invalid_argument("NO SOLUTION!");
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    vector<int> test = {2,7,11,15};
    vector<int> res = sol.twoSum(test, 13);

    for (int _: res) cout<<_<<" ";
    cout<<endl;

    return 0;
}



