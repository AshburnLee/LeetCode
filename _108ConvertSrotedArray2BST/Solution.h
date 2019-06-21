#ifndef _108CONVERTSORTEDARRAY2BST_SOLUTION_H
#define _108CONVERTSORTEDARRAY2BST_SOLUTION_H

#include "TreeNode.h"
#include <vector>

/// time: O(N)
/// space: O(1) 
using namespace std;
class Solution{
public:
	using itr = vector<int>::iterator; // alia

	TreeNode* sortedArrayToBST(vector<int>& nums){
		if (nums.size() == 0) return NULL;
		return buildBST(nums.begin(), nums.end());
	}

	TreeNode* buildBST(itr b, itr e){
        
		if (b == e) return NULL;

		itr m = b+(e-b)/2;
		TreeNode* node = new TreeNode(*m);

		node->left = buildBST(b, m);
		node->right = buildBST(m+1, e);

		return node;
	
	}

};

#endif
