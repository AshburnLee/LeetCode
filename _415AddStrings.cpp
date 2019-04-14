//
// Created by junhui on 14/04/19.
//
#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
public:
    //time: O(max(M,N))
    //space: O(max(M,N))
    string addStrings(string nums1, string nums2){
        int i=nums1.size()-1;
        int j=nums2.size()-1;
        int carry=0;
        string res;
        while (i>=0||j>=0||carry!=0){
            int sum=0;
            if(i>=0)
                sum += nums1[i--]-'0';
            if (j>=0)
                sum += nums2[j--]-'0';
            sum+=carry;
            carry = sum/10;
            sum = sum%10;
            res += to_string(sum);
        }
        reverse(res.begin(), res.end());
        return res;

    }
};

int main(int argc, char** argv){
    string a = "234";
    string b = "1234";
    cout<<Solution().addStrings(a,b)<<endl;
    return 0;
}