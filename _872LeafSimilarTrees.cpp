//
// Created by junhui on 22/04/19.
//
#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
};

class Solution {
private:
    void getLeafFrom(TreeNode* root, vector<int>& box){
        // for leaf nodes
        if (root->left == nullptr && root->right == nullptr){
            box.push_back(root->val);
            return;
        }

        // for non-leaf nodes
        if (root->left)
            getLeafFrom(root->left, box);
        if (root->right)
            getLeafFrom(root->right, box);
   }
public:
    // time: O(#node1 + #node2)  99.88%
    // space: O(#node1 + #node2)  69.23%
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafOfRoot1;
        getLeafFrom(root1, leafOfRoot1);
        vector<int> leafOfRoot2;
        getLeafFrom(root2, leafOfRoot2);

        for (int i=0, j=0; i<leafOfRoot1.size(), j<leafOfRoot2.size(); i++, j++){
            if (leafOfRoot1[i] != leafOfRoot2[j])
                return false;
        }

        return true;
    }

};

int main(int argc, char** argv){
    // leaves of tree1
    TreeNode node6(6);
    TreeNode node7(7);
    TreeNode node4(4);
    TreeNode node9(9);
    TreeNode node8(8);

    TreeNode node5(5);
    TreeNode node2(2);
    TreeNode node1(1);

    // root
    TreeNode node3(3);

    // construct tree1
    node2.left = &node7;
    node2.right = & node4;

    node5.left = &node6;
    node5.right = &node2;

    node1.left = &node9;
    node1.right = &node8;

    node3.left = & node5;
    node3.right = & node1;


    // leaves of tree2
    TreeNode node66(6);
    TreeNode node77(7);
    TreeNode node44(4);
    TreeNode node99(9);
    TreeNode node88(8);

    TreeNode node55(5);
    TreeNode node22(2);
    TreeNode node11(1);

    // root
    TreeNode node33(3);

    // construct tree1
    node22.left = &node77;
    node22.right = & node44;

    node55.left = &node66;
    node55.right = &node22;

    node11.left = &node99;
    node11.right = &node88;

    node33.left = & node55;
    node33.right = & node11;

    Solution sol;
    cout<<sol.leafSimilar(&node3, &node33)<<endl;

    return 0;
}
