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
    // time: O(#nodes)   100.00%
    // space: O(#nodes)   94.17%
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
           return NULL;
        invertTree(root->left);
        invertTree(root->right);
        swap(root->left, root->right);

        return root;
    }
};

int main(int argc, char** argv){

    return 0;
}
