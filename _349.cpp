#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // set<int> record;
        // for (int i=0; i<nums1.size(); i++)
        //     record.insert(nums1[i]);
        set<int> record(nums1.begin(), nums1.end());

        set<int> resSet;
        for (int i=0; i<nums2.size(); i++)
            if (record.find(nums2[i]) != record.end()) //in record
                resSet.insert(nums2[i]);
        
        // vector<int> res;
        // for (std::set<int>::iterator itr = resSet.begin(); itr != resSet.end(); itr++)
        //     res.push_back(*itr);
        // return res;
        return vector<int>( resSet.begin(), resSet.end() );
    }
};

int main(int argc, char const *argv[])
{
    vector<int> 
    return 0;
}
