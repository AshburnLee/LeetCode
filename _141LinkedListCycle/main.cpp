#include <iostream>
#include "Solution.h"
using namespace std;

int main( int argc, char** argv){
	ListNode* A = new ListNode(3);
	ListNode* B = new ListNode(2);
	ListNode* C = new ListNode(0);
	ListNode* D = new ListNode(4);
	
	A->next = B;
	B->next = C;
	C->next = D;

	/// has no cycle
	D->next = NULL;

	/// has a cycle
	//D->next = B;    

	cout<<Solution().hasCycle(A)<<endl;
	return 0;

}
