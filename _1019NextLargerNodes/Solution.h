#ifndef _1019NEXTGREATERNODE_H_
#define _1019NEXTGREATERNODE_H_

#include <iostream>
#include <vector>
#include "ListNode.h"

using namespace std;
// time: O(N*N)
// space: O(N)
class Solution{
public:
	vector<int>nextLargerNode(ListNode* head){
		vector<int> res;
		while(head){
			res.push_back(func(head));
			head=head->next;
		}
		return res;
	}

	int func(ListNode* head){
		int curr = head->val;
		head = head->next;

		while(head && head->val<=curr){
			head=head->next;
		}
		int res;
		if(head) res=head->val;
		else res = 0;

		return res;
	}	
};


#endif
