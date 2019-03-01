#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> record;
        for (int i=0; i<nums1.size();i++)
            record[nums1[i]] ++;
        vector<int> resV;
        for (int i=0;i<nums2.size(); i++){
            if (record[nums2[i]] > 0){
                resV.push_back(nums2[i]);
                record[nums2[i]] -- ;
            }
        }
        return resV;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    vector<int> v1={1,2,2,1};
    vector<int> v2={2,2};
    vector<int> res;
    res = sol.intersect(v1,v2);
    for (int _: res) cout<<_<<" ";
    cout<<endl;

    return 0;
}   