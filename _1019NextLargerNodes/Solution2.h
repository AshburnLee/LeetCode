#ifndef _1019NEXTGREATERNODE_SOLUTION2_H_
#define _1019NEXTGREATERNODE_SOLUTION2_H_

#include <stack>
#include <vector>
using namespace std;
// time:(N)
// space:(N)
class Solution2{
public:
   vector<int> NextLargerNodes(ListNode* head){
       vector<int> arr = convertToArray(head);
       vector<int> res = NextLargerNodes(arr);
       return res;
   }

   vector<int> convertToArray(ListNode* head){
       vector<int> res;

       ListNode* curr = head;
       while(curr){
           res.push_back(curr->val);
	   curr=curr->next;
       }
       return res;
   }
	
   vector<int> NextLargerNodes(vector<int>& nums){
   	stack<int> stc;
	vector<int> res(nums.size(), 0);

	for(int i=0;i<nums.size();i++){
	    while(!stc.empty() && nums[stc.top()] < nums[i]){
	    	res[stc.top()] = nums[i];
		stc.pop();
	    }
	    stc.push(i);
	}
	return res;
   }

};

#endif
