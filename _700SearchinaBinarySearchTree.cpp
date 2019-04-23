//
// Created by junhui on 23/04/19.
//

#include <iostream>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(nullptr), right(nullptr){}
};

class Solution{
public:
    // iterative version
    // time: O(logN)  92.51%
    // space: O(1)  99.58%
    TreeNode* searchBST(TreeNode* root, int val){
        while(root && root->val!= val){
//            if (root->val > val)
//                root = root->left;
//            else if (root->val < val)
//                root = root->right;

            root = (root->val > val) ? root->left: root-> right;
        }
        return root;
    }

    // recursive version
    // time:  O(logN)  92.51%
    // space: O(logN)   99.58%
    TreeNode* searchBST2(TreeNode* root, int val){
        if (root){
            if (root->val == val)
                return root;

            else if (root->val > val)
                return searchBST2(root->left, val);
            else if (root->val < val)
                return searchBST2(root->right, val);
        }

        return nullptr;

    }
};

int main(int argc, char** argv){
    // construct the above tree:
    //      9
    //     /\
    //    7 15
    //      /\
    //     10 20
    TreeNode node10(10);
    TreeNode node20(20);

    TreeNode node15(15);
    node15.left = &node10;
    node15.right = &node20;

    TreeNode node7(7);
    TreeNode node9(9);
    node9.left = &node7;
    node9.right = &node15;

    Solution sol;
    TreeNode* res = sol.searchBST2(&node9, 11);

    if (res)
        cout<<res->val<<endl;
    else cout << "val does not exist" << endl;

    return 0;
}