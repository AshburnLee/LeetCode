#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    // time: O(#Node)  91.82%
    // space: O(height)  94.77%
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> res;
        // termination condition
        if (root == NULL)
            return res;

        if (root->left == NULL && root->right == NULL){
            res.push_back(to_string(root->val));
            return res;
        }

        // recursion part
        std::vector<string> leftS = binaryTreePaths(root->left);
        for (int i=0; i<leftS.size(); i++)
            res.push_back(to_string(root->val) + "->" + leftS[i]);


        std::vector<string> rightS = binaryTreePaths(root->right);
        for (int i=0; i<rightS.size(); i++)
            res.push_back(to_string(root->val) + "->" + rightS[i]);

        return res;
    }
};
int main(int argc, char const *argv[]) {
    TreeNode node5(5);
    TreeNode node2(2);
    TreeNode node3(3);
    TreeNode node1(1);

    node2.right = &node5;
    node1.right = &node3;
    node1.left = &node2;

//    cout<<node1.left->right->val;
//    cout<<node1.right->val;

    Solution sol;
    vector<string> res = sol.binaryTreePaths(&node1);

    for (auto&item: res)
        cout<<item<<" ";
    cout<<endl;

    return 0;
}
