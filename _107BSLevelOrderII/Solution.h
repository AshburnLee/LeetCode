#ifndef _107BSLEVELORDERII_SOLUTION_H
#define _107BSLEVELORDERII_SOLUTION_H

#include "TreeNode.h"
#include <vector>
#include <algorithm>

using namespace std;
class Solution{
private:
	void levelOrder(vector<vector<int>>& res, TreeNode* root, int level){
		if (!root) return ;
		if (level == res.size())
			res.push_back({});

		res[level].push_back(root->val);
		levelOrder(res, root->left, level+1);
		levelOrder(res, root->right, level+1);
	}

public:
	vector<vector<int>> levelOrderBottum(TreeNode* root){
		vector<vector<int>> res;
		levelOrder(res, root, 0);

		reverse(res.begin(), res.end());

		return res;
	}
};

#endif
