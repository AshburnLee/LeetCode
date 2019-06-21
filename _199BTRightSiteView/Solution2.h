
#ifndef _199BTRIGHTSIGHTVIEW_SOLUTION2_H
#define _199BTRIGHTSIGHTVIEW_SOLUTION2_H

#include "TreeNode.h"
#include <vector>
#include <queue>

/// Level order traversal
/// time: O(N)
/// space: O(N) 
using namespace std;
class Solution2{
public:
	
	vector<int> rightSiteView(TreeNode* root){
		vector<int> res;
		if (!root) return res;
		queue<TreeNode*> q;
		
		q.push(root);

		while (!q.empty()){
			int l = q.size();
			for ( int i=0; i<l; i++){
				TreeNode* node = q.front();
				q.pop();
				if (i==0) res.push_back(node->val);

				if (node->right) q.push(node->right);
				if (node->left) q.push(node->left);
			}
		}
		
		return res;
	}
};

#endif
