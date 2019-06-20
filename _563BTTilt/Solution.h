#ifndef _563BSTTILT_SOLUTION_H
#define _563BSTTILT_SOLUTION_H

#include "TreeNode.h"
#include <vector>

/// time: O(N)
/// space: O(1) 
using namespace std;
class Solution{
public:
	int findTilt(TreeNode* root){
		int tilt = 0;
		postOrder(root, tilt);

		return tilt;
	}

	int postOrder(TreeNode* root, int& tilt){
		if (!root) return 0;

		int left = postOrder(root->left, tilt);
		int right = postOrder(root->right, tilt);

		tilt += abs(left - right);

		return left + right + root->val;
		
	}
};

#endif
