#ifndef _UTIL_TREE_H
#define _UTIL_TREE_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}

};

class Tree{
private:
	
	TreeNode* buildProcess(vector<int>::iterator a, vector<int>::iterator b){

		if (a == b) return nullptr;
		vector<int>::iterator m = a + (b-a)/2;
		TreeNode* node = new TreeNode(*m);
		
		node->left = buildProcess(a, m);
		node->right = buildProcess(m+1, b);
	
		return node;
	
	}
public:
	Tree(){}
	~Tree(){}

	TreeNode* buildTree(vector<int>& nums, int signal){
		// if a BST need to be built
		if (signal == 1) sort(nums.begin(), nums.end());
		if (nums.empty()) return nullptr;
	
		return buildProcess(nums.begin(), nums.end());
	
	}

	void printTree(TreeNode* root){
		if (!root) return;
		printTree(root->left);
		cout<<root->val<<" ";
		printTree(root->right);

	}
};

#endif
