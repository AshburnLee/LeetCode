#ifndef _437SUMPATHII_SOLUTION_H
#define _437SUMPATHII_SOLUTION_H

#include <iostream>
#include <vector>
#include "../util/Tree.h"

using namespace std;

/// time: O(N) the number of nodes
/// space: O(H) the depth of the tree
class Solution{
public:
	int pathSum(TreeNode* root, int sum){
	
		if (!root) return 0;

		return findPath(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
	}	

	int findPath(TreeNode* node, int sum){
		if (!node) return 0;

		int res = 0;
		if (node->val == sum) res += 1;

		res += findPath(node->left, sum-node->val);
		res += findPath(node->right, sum-node->val);

		return res;
	}
};

#endif
