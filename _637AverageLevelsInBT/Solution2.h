#ifndef _637AVERAGEOFLEVELSINBT_SOLUTION2_H
#define _637AVERAGEOFLEVELSINBT_SOLUTION2_H

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
	vector<double> averageOfLevels(TreeNode* root){
		vector<double> res;
		if (!root) return res;
		queue<TreeNode*> q;
		q.push(root);

		while(!q.empty()){
			int l = q.size();
			double sum = 0;
			for (int i=0; i<l ;i++){
				TreeNode* node = q.front();
				q.pop();

				sum += node->val;
				if (node->left)
					q.push(node->left);
				if (node->right)
					q.push(node->right);
			}
				
			res.push_back(sum/l);

		}

		return res;
	}
};

#endif
