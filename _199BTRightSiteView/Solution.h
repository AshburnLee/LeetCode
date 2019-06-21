#ifndef _199BTRIGHTSIGHTVIEW_SOLUTION_H
#define _199BTRIGHTSIGHTVIEW_SOLUTION_H

#include "TreeNode.h"
#include <vector>

/// pre order traversal
/// time: O(N)
/// space: O(1) 
using namespace std;
class Solution{
public:
	void preOrder(TreeNode* root, vector<int>& res, int level){
		if (!root) return;

		if (res.size() < level) 
			res.push_back(root->val);

		preOrder(root->right, res, level+1);
		preOrder(root->left, res, level+1);
	}
	
	vector<int> rightSiteView(TreeNode* root){
		vector<int> res;


		preOrder(root, res, 1);
		return res;
	}
};

#endif
