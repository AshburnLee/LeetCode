#ifndef _DiSTRIBUTECOINSBT_SOLUTION_H
#define _DiSTRIBUTECOINSBT_SOLUTION_H

#include <iostream>
#include "../util/Tree.h"

class Solution{
	public:
		int distributeCoins(TreeNode* root){
			int res=0;
			dfs(root, res);
			return res;
		}

	private:
		int dfs(TreeNode* root, int& res){
			if (!root)
				return 0;
			int l=dfs(root->left, res);
			int r=dfs(root->right, res);
			res = res + abs(l) + abs(r);
			return root->val+l+r-1;
		}

};

#endif
