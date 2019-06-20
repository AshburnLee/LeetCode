#ifndef _107BSLEVELORDERII_SOLUTION2_H
#define _107BSLEVELORDERII_SOLUTION2_H

#include "TreeNode.h"
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
class Solution2{

/// BFS
/// time: O(N) N: #Tree nodes
/// sapce: O(N) for queue
public:
	vector<vector<int>> levelOrderBottum(TreeNode* root){
		vector<vector<int>> res;
		if (!root) return res;
		queue<TreeNode*> q;
		q.push(root);

		while(!q.empty()){
			int l = q.size();
			vector<int> currLevel;
			for (int i=0; i<l ;i++){
				TreeNode* node = q.front();
				q.pop();

				currLevel.push_back(node->val);
				if (node->left)
					q.push(node->left);
				if (node->right)
					q.push(node->right);
			}
			res.push_back(currLevel);

		}
		reverse(res.begin(), res.end());
		return res;
	}
};

#endif
