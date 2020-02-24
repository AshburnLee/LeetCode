#include "Solution.h"
#include "Solution2.h"
#include <iostream>

using namespace std;

void printArray(vector<int>& nums){
    for(auto item:nums)
	cout<<item<<" ";
    cout<<endl;
}

int main(){
	ListNode* n0 = new ListNode(4);
	ListNode* n1 = new ListNode(3);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(1);

	n0->next = n1;
	n1->next = n2;
	n2->next = n3;
	
	vector<int> res;

	Solution2* sol = new Solution2();
	res = sol->NextLargerNodes(n0);
        printArray(res);
	return 0;

}
