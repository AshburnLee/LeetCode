#include "Solution.h"
#include <iostream>

int main(int argc, char** argv){

	vector<int> nums = {1,3,5,7,9,12,15};

	LinkedList ll;
	ListNode* myList = ll.createLinkedList(nums);


	TreeNode* root = Solution().sortedListToBST(myList);

	Tree myTree;
	myTree.printTree(root);
	cout<<endl;

	return 0;
}
