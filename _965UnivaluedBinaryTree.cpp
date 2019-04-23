//
// Created by junhui on 23/04/19.
//
#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
};

class Solution {
public:
    // time: O(N)  100.00%
    // space: O(logN)  99.47%
    bool isUnivalTree(TreeNode* root) {
        int value = root->val;
        return dfs(root, value);
    }

    bool dfs(TreeNode* root, int value){
        if (!root)
            return true;

        else{
            if (root->val != value)
                return false;

            return dfs(root->left, value) && dfs(root->right, value);
        }
    }
};

int main(int argc, char** argv){
    // construct the above tree:
    //      1
    //     /\
    //    1 1
    //      /\
    //     1 1
    TreeNode node10(2);
    TreeNode node20(1);

    TreeNode node15(1);
    node15.left = &node10;
    node15.right = &node20;

    TreeNode node7(1);
    TreeNode node9(1);
    node9.left = &node7;
    node9.right = &node15;

    Solution sol;
    cout<<sol.isUnivalTree(&node9)<<endl;
    return 0;
}