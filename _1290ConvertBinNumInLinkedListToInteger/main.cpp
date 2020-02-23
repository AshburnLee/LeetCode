#include "Solution.h"

int main(){
	ListNode* n0 =new ListNode(1);
	ListNode* n1 =new ListNode(1);
	ListNode* n2 =new ListNode(0);
	ListNode* n3 =new ListNode(1);
	
	n0->next = n1;
	n1->next = n2;
	n2->next = n3;

	Solution sol;
	int res = sol.getDecimalValue(n0);
	cout<<res<<endl;
	return 0;

}
