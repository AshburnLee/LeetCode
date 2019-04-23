//
// Created by junhui on 22/04/19.
//

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // iterate all nodes
    // use extra space to store all path
    // time: O(#nodes)  13.05%
    // space: O(height)   5.81%
    bool hasPathSum(TreeNode* root, int sum) {
        boxOfPath = allPathes(root);
        for (auto& item: boxOfPath)
            if (item == sum)
                return true;
        return false;
    }

private:
    vector<int> boxOfPath;

    vector<int> allPathes(TreeNode* root){
        vector<int> res;
        if (root== nullptr)
            return res;
        if (root->left == nullptr && root->right == nullptr){
            res.push_back(root->val);
            return res;
        }

        vector<int> leftS = allPathes(root->left);
        for (auto & i:leftS)
            res.push_back(root->val+i);

        vector<int> rightS = allPathes(root->right);
        for (auto & i: rightS)
            res.push_back(root->val+i);

        return res;
    }
};

int main(int argc, char const *argv[]) {

    // construct a tree with node3 as the root
    TreeNode node15(15);
    TreeNode node7(7);

    TreeNode node20(20);
    node20.left = &node15;
    node20.right = &node7;

    TreeNode node9(9);
    TreeNode node3(3);
    node3.left = &node9;
    node3.right = &node20;

    Solution sol;
    cout<<sol.hasPathSum(&node3, 31)<<endl;

    return 0;
}