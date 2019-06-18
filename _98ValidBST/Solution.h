#ifndef _98VALIDBST_SOLUTION_H
#define _98VALIDBST_SOLUTION_H

#include <iostream>
#include <vector>
#include "TreeNode.h"
using namespace std;

/// Inorder traversal, and serialize all the nodes
/// time: O(N)
/// space: O(N)
class Solution{
private:
	vector<int> nodes;
    void Inorder(TreeNode* root){
        if (!root) return;
        
        Inorder(root->left);
        
        nodes.push_back(root->val);
        
        Inorder(root->right);
        
    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        Inorder(root);
        
        for (int i=0; i<nodes.size()-1; i++)
            if (nodes[i+1]<=nodes[i])
                return false;
        
        return true;
    }
    
};

#endif
