#ifndef _98VALIDBST_TREENODE_H
#define _98VALIDBST_TREENODE_H

#include <iostream>

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}

};

#endif
