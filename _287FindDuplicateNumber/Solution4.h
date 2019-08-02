#ifndef _287FINFDDUPLICATENUMBER_SOLUTION4_H_
#define _287FINFDDUPLICATENUMBER_SOLUTION4_H_

#include <iostream>
#include <vector>

///time: O(N)
/// space :O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int turtle = nums[0];
        int rabbit = nums[0];
        do{
            turtle = nums[turtle];      // one step
            rabbit = nums[nums[rabbit]]; // two steps
        }while(turtle != rabbit);
        
        int ptr1 = nums[0];
        int ptr2 = turtle;
        while(ptr1 != ptr2){
            ptr1 = nums[ptr1];
            ptr2 = nums[ptr2];
        }
        return ptr1;
                        
    }
};

#endif //_287FINFDDUPLICATENUMBER_SOLUTION2_H_
