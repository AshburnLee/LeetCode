#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> res;
        if (!root)
            return res;
        queue<pair<TreeNode*, int>> q; // store node and level
        q.push(make_pair(root, 0)); //init queue
        while(not q){
            TreeNode* node = q.front().first;
            int level = q.front().second;
            q.pop(); // leave teh queue

            if(level == res.size()) // res has no such level
                res.push_back(vector<int>()); // create a new vector
            res[level].push_back(node->val);
            if (node->left)
                q.push(make_pair(node->left, level+1));
            if(node->right)
                q.push(make_pair(node->right, level+1));
        }
        return res;
    }
};
