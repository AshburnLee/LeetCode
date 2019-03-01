#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0; //def
        int j=0;  //def
        int k=0; //def

        vector<int> arr(m+n);
        while(i<m || j< n){
            if(nums1[i] <= nums2[j])
                arr[k++] = nums1[i++];
            else
                arr[k++] = nums2[j++];
        }
        return arr;
        
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // make a copy of nums1 with no 0s
        int k=0;
        for(int i=m-1; nums1[i]==0; i--)
            k=i;
        vector<int> tmp(k);
        for(int i=k-1; i>=0;i--)
            tmp[i] = nums1[i];
        
        //merge tmp & nums2 to nums1
        int i=0;
        int j=0;
        int q=0;
        while(q < m){
            if(nums2[i] <= tmp[j])
                nums1[q++] = nums2[i++];
            else
                nums1[q++] = tmp[j++];
        }
    }

};

int main(int argc, char const *argv[])
{
    // vector<int> t1 = {1,2,3};
    // vector<int> t2 = {2,3,7};
    // vector<int> res(t1.size() + t2.size());
    // Solution sol;
    // res = sol.merge(t1,t1.size(), t2, t2.size());
    // for (int _ : res)
    //     cout<<_<<" ";
    // cout<<endl;


    vector<int> s1 = {1,2,3,0,0,0};
    vector<int> s2 = {2,3,7};
    Solution sol;
    sol.merge(s1, s1.size(), s2, s2.size());
    for (int _ : s1)
        cout<<_<<" ";
    cout<<endl;
    return 0;
}
