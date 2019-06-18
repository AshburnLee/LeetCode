#ifndef _501FINDMODEINBST_SOLUTION_H
#define _501FINDMODEINBST_SOLUTION_H

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
    vector<int> findMode(TreeNode* root) {
        if(!root) return {};
        Inorder(root);
        
		vector<int> res;
		int j=1;
        for (int i=0; i<nodes.size()-1; i++){
			if (nodes[i]==nodes[j]){
				res.push_back(nodes[i]);
				j++;
			}else
				j++;
		}

		return res;
    }
    
};

#endif
