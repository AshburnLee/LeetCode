#ifndef _508MOSTFREQUENTSUBTREESUM
#define _508MOSTFREQUENTSUBTREESUM

#include <iostream>
#include <map>
#include <vector>
#include "TreeNode.h"
#include <algorithm>
using namespace std;

/// PostOrder Traversal
/// time: O(N)
/// space: O(N)
class Solution{
private:
	map<int, int> nodes;
	int maxCount = 0;

	/* return node val sum of Tree root */
    int PostOrder(TreeNode* root){
        if (!root) return 0;

		root->val = root->val + PostOrder(root->left) + PostOrder(root->right);
		int sum = root->val;
		nodes[sum]++;
		maxCount = max(maxCount, nodes[sum]);

		return sum;
        
    }
	
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
		
		PostOrder(root);
		vector<int> res;
		for (auto i : nodes ){
			if (i.second==maxCount)
				res.push_back(i.first);
		}

		return res;
    }
    
};

#endif
