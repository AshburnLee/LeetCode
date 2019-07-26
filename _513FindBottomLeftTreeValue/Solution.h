#ifndef _513FINDBOTTOMLEFTTREEVALUE_SOLUTION_H
#define _513FINDBOTTOMLEFTTREEVALUE_SOLUTION_H

#include <iostream>
#include <vector>
#include "../util/Tree.h"

/// time: O(#nodes)
/// space: O(height)
class Solution{
public:
	int findBottomLeftValue(TreeNode* root){
		std::vector<int> res;
		dfs(root, res, 1);
		return res[res.size()-1];
	}

private:
	void dfs(TreeNode* root, std::vector<int>& res, int level){
		if (!root) return;
		if (res.size() < level)
			res.push_back(root->val);
		dfs(root->left, res, level+1);
		dfs(root->right, res, level+1);
	}
};


#endif
