#ifndef _515FINDLARGESTVALUEINTREEROW_SOLUTION2_H
#define _515FINDLARGESTVALUEINTREEROW_SOLUTION2_H

#include <iostream>
#include "TreeNode.h"
#include <queue>
using namespace std;

class Solution2{
public:
	int level(TreeNode* root){
		if (!root) return 0;

		return 1+max(level(root->left), level(root->right));
	}

	vector<int> largestValues(TreeNode* root){
		int numLevel = level(root);
		queue<TreeNode*> q;
		q.push(root);
		vector<TreeNode*> tmp;
		vector<int> res{root->val};
		for (int l=1; l<numLevel; l++){
			for (int i=0; i<q.size(); i++){
				
				TreeNode* curr = q.front();
				q.pop();
				if (curr->left)
					tmp.push_back(curr->left);
				if (curr->right)
					tmp.push_back(curr->right);
			}
			// get max val from tmp
			int tmpValue = 0;
			for (auto i:tmp){
				cout<<i->val<<" ";
				tmpValue = max(tmpValue, i->val);
				q.push(i);
			}
			cout<<endl;
			// generate res
			res.push_back(tmpValue);
			tmp.clear();
		}
		return res;
	}

};

#endif 
