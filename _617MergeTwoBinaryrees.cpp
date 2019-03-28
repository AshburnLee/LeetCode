//
// Created by junhui on 28/03/19.
//

#include <iostream>

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(NULL),right(NULL) {}
};

class Solution{
public:
    // time: O(2^N). N is the depth of the deeper tree
    // space: O(N). N is the depth of the deeper tree
    /* mergeTrees: pass two roots, return the merged root */
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2){
        if (!t1 && !t2)
            return NULL;

        TreeNode* node = new TreeNode((t1? t1->val: 0)+(t2? t2->val: 0));
        node->left = mergeTrees( (t1? t1->left: NULL), (t2? t2->left: NULL) );
        node->right = mergeTrees( (t1? t1->right: NULL), (t2? t2->right: NULL) );

        return node;
    }
};

int main(int argc, char** argv){

    return 0;
}