//
// Created by junhui on 28/03/19.
//
#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

class Solution {

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (!root)
            return res;

        TreeNode *cur = root;
        while (cur != nullptr){
            if (cur->left == nullptr) {
                res.push_back(cur->val);
                cur = cur->right;
            }else{
                TreeNode* pre = cur->left;
                while (pre->right != nullptr && pre->right!=cur)
                    pre=pre->right;
                if (pre->right == nullptr){
                    res.push_back(cur->val);
                    pre->right = cur;
                    cur = cur->left;
                }else{
                    pre->right = nullptr;
                    cur = cur->right;
                }
            }
        }
        return res;
    }

    // recursion manner
    vector<int> preorder(TreeNode* root) {
        vector<int> res;
        _preorder(root, res);
        return res;
    }

private:
    void _preorder(TreeNode* node, vector<int>& res){
        if (node){
            res.push_back(node->val);
            _preorder(node->left, res);
            _preorder(node->right, res);
        }
    }
};

int main(int argc, char** argv){

    TreeNode* root1 = new TreeNode(1);
    TreeNode* left1 = new TreeNode(2);
    root1->left = left1;
    TreeNode* right1 = new TreeNode(3);
    root1->right = right1;


    Solution sol;
    vector<int> vec = sol.preorder(root1);
    for(auto& _: vec)
        cout<<_<<" ";
    cout<<endl;

    vector<int> res = sol.preorderTraversal(root1);
    for (auto& _:res)
        cout<<_<<" ";
    cout<<endl;
    return 0;
}

