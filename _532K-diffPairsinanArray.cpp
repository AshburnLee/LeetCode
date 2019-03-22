//
// Created by junhui on 22/03/19.
//

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution{
public:
    //time: O(N)
    //space: O(N^2)
    int findPairs(vector<int>& nums, int k) {
        int sum = -1;
        int res = 0;
        set<int> s;

        if (k<0)
            return res;

        for (int i=0;i<nums.size(); i++){
            for (int j=i+1;j<nums.size(); j++){

                if ((nums[i]-nums[j] == k || nums[j]-nums[i] == k) && s.find(nums[i]+nums[j])==s.end()){
                    s.insert(nums[i] + nums[j]);
                    cout<<nums[i]<<" "<<nums[j]<<endl;
                    res += 1;
                }
            }
        }
        return  res;
    }
};

int main(int argc, char** argv){
    int tmp[] = {-1,0,0,1,0,0,-1};
    vector<int> tst(tmp, tmp+sizeof(tmp)/sizeof(int));

    int k;
    cout<<"input k: "<<endl;
//    cin>>k;
    cout<<Solution().findPairs(tst, 1)<<endl;


    return 0;
}