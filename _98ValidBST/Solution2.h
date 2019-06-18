#ifndef _98VALIDBST_SOLUTION2_H
#define _98VALIDBST_SOLUTION2_H

#include "TreeNode.h"
#include <iostream>
using namespace std;

/// Inorder traversal, without serialize all the nodes
/// time: O(N)
/// space: O(N)
class Solution2{
public:
	bool isValidBST(TreeNode* root){
		TreeNode* pre = NULL;
		return isValid(root, pre);
	}
private:
	bool isValid(TreeNode* root, TreeNode* &pre){
		if (!root) return true;
		if (!isValid(root->left, pre)) return false;
		if (pre && pre->val >= root->val) 
			return false;
		pre = root;
		return isValid(root->right, pre);
	}
};

#endif
