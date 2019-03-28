#include <utility>

//
// Created by junhui on 28/03/19.
//
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

class Solution {
/* 1) non-recursive manner */
public:
    vector<int> preorderTraversal3(TreeNode* root) {
        vector<int> res;
        if (!root)
            return res;

        TreeNode *cur = root;
        while (cur != nullptr){
            if (cur->left == nullptr) {
//                cout<<cur->val<<" ";   ///////////////////////////
                res.push_back(cur->val);
                cur = cur->right;
            }else{
                TreeNode* pre = cur->left;
                while (pre->right != nullptr && pre->right!=cur)
                    pre=pre->right;
                if (pre->right == nullptr){
//                    cout<<cur->val<<" ";  //////////////////////////
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



/* 2) recursive manner */
public:
    // recursion manner
    vector<int> preorderTraversal2(TreeNode* root) {
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



/* 3) simulate the system stack */
private:
    struct Command{
        string s;
        TreeNode* node;
        Command(string _s, TreeNode* _node): s(std::move(_s)), node(_node) {}
    };
public:
    // time: O(N). N is the number of nodes
    // space: O(M). M is the number of layers
    vector<int> preorderTraversal(TreeNode* root){
        vector<int> res;
        if (!root)
            return res;
        stack<Command> stack;
        stack.push(Command("go", root));

        while(!stack.empty()){
            Command com = stack.top();
            stack.pop();

            if (com.s == "print")
                res.push_back(com.node->val);
            else if(com.s == "go"){
                if (com.node->right)
                    stack.push(Command("go", com.node->right));  // right
                if (com.node->left)
                    stack.push(Command("go", com.node->left));   // left
                stack.push(Command("print", com.node));         // val
            }
        }
        return res;

    }
};

int main(int argc, char** argv){

    auto* root1 = new TreeNode(1);
    auto* left1 = new TreeNode(2);
    root1->left = left1;
    auto* right1 = new TreeNode(3);
    root1->right = right1;


    Solution sol;
    vector<int> vec = sol.preorderTraversal2(root1);
    for(auto& _: vec)
        cout<<_<<" ";
    cout<<endl;

    vector<int> res = sol.preorderTraversal(root1);
    for (auto& _:res)
        cout<<_<<" ";
    cout<<endl;

    vector<int> qwe = sol.preorderTraversal3(root1);
    for (auto&_: qwe)
        cout<<_<<" ";
    cout<<endl;
    return 0;
}

