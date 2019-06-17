#ifndef _110BALANCEDBINARYTREE_SOLUTION_H
#define _110BALANCEDBINARYTREE_SOLUTION_H

#include <iostream>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};

/// time: O(N)  #nodes
/// space: O(H) height
class Solution{
	
public:
	bool isBalanced(TreeNode* root) {
		int height;
		return ifBalanced(root, height);
	}

	bool ifBalanced(TreeNode* root, int& height){
		if (!root) {
			height = 0;
			return true;
		}
		int leftHeight = 0;
		int rightHeight = 0;

		if (!ifBalanced(root->left, leftHeight)) return false;
		if (!ifBalanced(root->right, rightHeight)) return false;
		if (abs(leftHeight - rightHeight)>1) return false;
		height = max(leftHeight, rightHeight) + 1;

		return true;
		
	}
};

#endif
