#ifndef _114FLATTENBT2LL_SOLUTION_H
#define _114FLATTENBT2LL_SOLUTION_H

#include <iostream>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};

/// time: O(N)  #nodes
/// space: O(H) height
class Solution{
private:
	TreeNode* newRoot;
	TreeNode* curr;
public:
	void flatten(TreeNode* root){
		if (!root) return;
        
		flatten(root->left);
		
		if (root->left){
			TreeNode* t = root->left;
            while(t->right)
                t = t->right;
			t->right = root->right;
			root->right = root->left;

			root->left = NULL;
		}
        
        flatten(root->right);
	}
};


#endif
