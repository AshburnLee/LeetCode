//
// Created by junhui on 16/05/19.
//

#ifndef _75SORTCOLOR_SORTCOLOR1_H
#define _75SORTCOLOR_SORTCOLOR1_H

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:

    /**
     * @brief count then fill
     * @param nums: input
     * Time: O(N)  100.00%
     * Space: O(1)  33.70%
     */
    void sortColor(vector<int>& nums){
        int count[3] = {0,0,0};
        if (nums.size() == 0)
            return;

        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 0)
                count[0]++;
            else if (nums[i] == 1)
                count[1] ++;
            else
                count[2] ++;
        }

        int index = 0;
        for (int i=0; i<count[0]; i++)
            nums[index++] = 0;
        for (int i=0; i<count[1]; i++)
            nums[index++] = 1;
        for (int i=0;i<count[2]; i++)
            nums[index++] = 2;
    }
};

#endif //_75SORTCOLOR_SORTCOLOR1_H
