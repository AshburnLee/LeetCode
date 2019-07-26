#ifndef _513FINDBOTTOMLEFTTREEVALUE_SOLUTION2_H
#define _513FINDBOTTOMLEFTTREEVALUE_SOLUTION2_H

#include <iostream>
#include <vector>
#include "../util/Tree.h"

/// time: O(#nodes)  without extra space compared to Solution1
/// space: O(height)
class Solution2{
public:
	int findBottomLeftValue(TreeNode* root){
		int res = 0;
		int maxLevel = -1;
		dfs(root, 0, maxLevel, res);
		return res;
	}

private:
	void dfs(TreeNode* root, int curLevel, int& maxLevel, int& res){
		if (!root) 
			return;
		if (curLevel > maxLevel){
			res = root->val;
			maxLevel = curLevel;
		}
			
		dfs(root->left, curLevel+1, maxLevel, res);
		dfs(root->right, curLevel+1, maxLevel, res);
	}
};


#endif
