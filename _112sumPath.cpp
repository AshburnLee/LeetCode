#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        // if the tree is empty
        if (root == NULL)
            return false;
        // if this root is a leaf
        if (root->left == NULL && root->right == NULL)
            return root->val == sum;
        if (hasPathSum(root->left, sum-root->val))
            return true;
        if (hasPathSum(root->right, sum-root->val))
            return true;
        return false;
    }
};

int main(int argc, char const *argv[]) {
    return 0;
}
