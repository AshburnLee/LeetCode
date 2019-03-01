#include <iostream>
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        // termination condition
        if (root == NULL)
            return res;
        if (root->left == NULL && root->right == NULL)
            res.push_back(to_string(root->val));

        // recursion part
        std::vector<string> leftS = binaryTreePaths(root->left);
        for (int i=0;i<leftS.size(); i++)
            res.push_back(to_string(root->val) + "->" + leftS[i]);

        std::vector<string> rightS = binaryTreePaths(root->left);
        for (int i=0;i<rightS.size(); i++)
            res.push_back(to_string(root->val) + "->" + rightS[i]);

        return res;
    }
};
int main(int argc, char const *argv[]) {

    return 0;
}
