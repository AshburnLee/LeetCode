//
// Created by junhui on 22/04/19.
//
#ifndef _112SUMPATH_SOLUTION2_H
#define _112SUMPATH_SOLUTION2_H


#include <iostream>
#include <vector>
#include "../util/Tree.h"

using namespace std;

class Solution2 {
public:
    // find the answer before iterate all nodes
    // time: O(#nodes)  99.49%
    // space: O(height)   44.95%
    bool hasPathSum(TreeNode* root, int sum) {
        // if the tree is empty
        if (root == nullptr)
            return false;
        // if this root is a leaf
        if (root->left == nullptr && root->right == nullptr)
            return root->val == sum;
        
		if (hasPathSum(root->left, sum-root->val))
            return true;
        if (hasPathSum(root->right, sum-root->val))
            return true;
        return false;
    }
};

#endif
