#ifndef _337HOUSEROBBERIII_SOLUTION_H
#define _337HOUSEROBBERIII_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x), left(NULL), right(NULL) {}

};

class Solution{
public:
	int rob(TreeNode* root){
		vector<int> res = buttomUp(root);
		return max(res[0], res[1]);
	}

private:
	vector<int> buttomUp(TreeNode* root){
		if (!root) return vector<int>(2, 0);

		vector<int> left = buttomUp(root->left);
		vector<int> right = buttomUp(root->right);

		vector<int> res(2,0);

		res[0] = max(left[0], left[1]) + max(right[0], right[1]);
		res[1] = root->val + right[0] + left[0];

		return res;
	
	}
};

#endif
