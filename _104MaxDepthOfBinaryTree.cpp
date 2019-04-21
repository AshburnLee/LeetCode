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
    // time: O(N)
    // space: O(N)
    // return the max depth of tree: root
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;

        int leftMax = maxDepth(root->left);
        int rightMax = maxDepth(root->right);

        return max(leftMax, rightMax)+1;
    }
};

int main(int argc, char** argv){
    // construct the above tree:
    //      3
    //     /\
    //    9 20
    //      /\
    //     15 7
    TreeNode node15(15);
    TreeNode node7(7);

    TreeNode node20(20);
    node20.left = &node15;
    node20.right = &node7;

    TreeNode node9(9);
    TreeNode node3(3);
    node3.left = &node9;
    node3.right = &node20;

    cout<<Solution().maxDepth(&node3)<<endl;

    return 0;
}
