#ifndef _897INCREASINGORDERSEARCHTREE_SOLUTION_H
#define _897INCREASINGORDERSEARCHTREE_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};

/// Inordcer Search  
/// time: O(N) N:#nodes
/// space: O(H) H: the height of this tree
class Solution{
private:
	TreeNode* newRoot;
	TreeNode* curr;
public:
    TreeNode* increasingBST(TreeNode* root){
		TreeNode* node;

		if (!root) return NULL;
		increasingBST(root->left);

		if (!newRoot){
			newRoot = new TreeNode(root->val);
			curr = newRoot;
		}
		else{
			curr->right = new TreeNode(root->val);
			curr = curr->right;
		}

		increasingBST(root->right);
		return newRoot;
    }

	void printNodes(TreeNode* root){
		vector<int> nodes;
		if (!root) return;

		printNodes(root->left);
		cout<<root->val<<" ";
		printNodes(root->right);

	}

};

#endif
