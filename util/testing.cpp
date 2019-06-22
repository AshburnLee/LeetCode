#include "Tree.h"
#include "LinkedList.h"

int main(int argc, char** argv){
	vector<int> nums = {4,2,8,1,9,3,6,7};

	Tree tn;

	TreeNode* root1 = tn.buildTree(nums,0);
	tn.printTree(root1);
	cout<<endl;

	TreeNode* root2 = tn.buildTree(nums,1);
	tn.printTree(root2);
	cout<<endl;

	LinkedList ll;
	
	ListNode* list = ll.createListList(nums);
	ll.printList(list);
	cout<<endl;


	return 0;
}
