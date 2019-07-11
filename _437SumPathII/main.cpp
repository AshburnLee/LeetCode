#include "Solution.h"

int main(int argc, char** argv){
	TreeNode* node10 = new TreeNode(10);
	TreeNode* node5 = new TreeNode(5);
	TreeNode* node3p = new TreeNode(-3);
	TreeNode* node31 = new TreeNode(3);
	TreeNode* node2 = new TreeNode(2);
	TreeNode* node11 = new TreeNode(11);
	TreeNode* node32 = new TreeNode(3);
	TreeNode* node2p = new TreeNode(-2);
	TreeNode* node1 = new TreeNode(1);

	node10->left = node5;
	node10->right = node3p;

	node5->left = node31;
	node5->right = node2;

	node3p->right = node11;

	node31->left = node32;
	node31->right = node2p;

	node2->right = node1;

	cout<<Solution().pathSum(node10, 8)<<endl;

	return 0;
}
