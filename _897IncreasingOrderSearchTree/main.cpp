#include "Solution.h"

int main(int argc, char** argv){
	TreeNode* n1 = new TreeNode(4);
	TreeNode* n2 = new TreeNode(3);
	TreeNode* n3 = new TreeNode(6);
	TreeNode* n4 = new TreeNode(1);
	TreeNode* n5 = new TreeNode(5);
	TreeNode* n6 = new TreeNode(7);

	n1->left = n2;
	n1->right = n3;
	n2->left = n4;

	n3->left = n5;
	n3->right = n6;

	Solution sol;
	TreeNode* newRoot = sol.increasingBST(n1);

	sol.printNodes(newRoot);

	return 0;
}
