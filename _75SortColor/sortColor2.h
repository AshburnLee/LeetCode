//
// Created by junhui on 16/05/19.
//

#ifndef _75SORTCOLOR_SORTCOLOR2_H
#define _75SORTCOLOR_SORTCOLOR2_H

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution2{
public:
    /**
     * Three-way quick sort
     * @param nums
     * Time: O(N) 100.00%
     * Space: O(1) 63.10%
     */
    void sortColors(vector<int>& nums){
        int zero = -1;  //def
        int two = nums.size();   //def

        for (int i=0; i<two; ){
            if(nums[i] == 1)
                i++;
            else if(nums[i] == 2)
                swap(nums[--two], nums[i] );
            else {
                assert( nums[i] == 0 );
                swap(nums[++zero], nums[i++]);
            }
        }
    }

};

#endif //_75SORTCOLOR_SORTCOLOR2_H
