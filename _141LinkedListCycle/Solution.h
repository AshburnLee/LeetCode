#ifndef _141LINKEDLISTCYCLE_SOLUTION_H
#define _141LINKEDLISTCYCLE_SOLUTION_H

#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){}
};

class Solution{
public:
	bool hasCycle(ListNode* head){
		if(!head) return false;
		ListNode* rabbit=head;
		ListNode* turtle=head;


		while(rabbit && turtle){
			rabbit = rabbit->next;
			turtle = turtle->next;
			
			/// one step faster than the turtle
			if (rabbit) rabbit=rabbit->next;
			if (rabbit && (rabbit==turtle))
				return true;
		}
		return false;
	}

};

#endif
