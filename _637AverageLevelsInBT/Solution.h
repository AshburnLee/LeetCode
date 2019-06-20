#ifndef _637AVERAGELEVELSINBT_SOLUTION_H
#define _637AVERAGELEVELSINBT_SOLUTION_H

#include "TreeNode.h"
#include <vector>
#include <algorithm>

/// DFS
/// time: O(N)
/// space: O(N)
using namespace std;
class Solution{
private:
	void levelOrder(vector<vector<int>>& res, TreeNode* root, int level){
		if (!root) return ;
		if (level == res.size())
			res.push_back({});

		res[level].push_back(root->val);
		levelOrder(res, root->left, level+1);
		levelOrder(res, root->right, level+1);
	}

public:
	vector<double> averageOfLevels(TreeNode* root){
		vector<vector<int>> res;
		levelOrder(res, root, 0);

		vector<double> ans;

		for (auto i: res){
			double sum = 0.0;
			for (int j=0; j<i.size(); j++){
				sum += i[j];
			}
			ans.push_back(sum/i.size());
		}
		return ans;
	}
};

#endif
