#ifndef _1038BST2GST_SOLUTION_H
#define _1038BST2GST_SOLUTION_H

#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};

/// Traverse a tree in the order of Right-Root-Left
/// time: O(N) N:#nodes
/// space: O(H) H: the height of this tree
class Solution{
private:
	int acc = 0;

public:
	TreeNode* bstToGst(TreeNode* root){
		rrl(root);
		return root;
	
	}
	void rrl(TreeNode* root){
		if (!root) return;

		bstToGst(root->right); /// rrl(root->right);

		root->val += acc;
		acc = root->val;

		bstToGst(root->left);  /// rrl(root->left);

	}

};
#endif
