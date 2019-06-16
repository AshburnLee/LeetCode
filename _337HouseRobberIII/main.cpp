#include "Solution.h"

int main(int argc, char** argv){
	//construct a tree
	TreeNode* n1 = new TreeNode(3);
	TreeNode* n2 = new TreeNode(4);
	TreeNode* n3 = new TreeNode(5);
	TreeNode* n4 = new TreeNode(1);
	TreeNode* n5 = new TreeNode(3);
	TreeNode* n6 = new TreeNode(3);

	n1->left = n2;
	n1->right = n3;

	n2->left = n4;
	n2->right = n5;

	n3->right = n6;

	// rob
	cout<<Solution().rob(n1)<<endl;
	return 0;
}
