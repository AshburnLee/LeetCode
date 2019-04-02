//
// Created by junhui on 02/04/19.
//
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        vector<TreeNode*> vec;
        vec.push_back(root);
        int i = 0;
        while (i < vec.size() && vec[i]!=NULL) {
            vec.push_back(vec[i]->left);
            vec.push_back(vec[i]->right);
            i++;
        }
        while (i < vec.size() && vec[i]==NULL)
            i++;

        return i == vec.size();
    }

};

void printQue(queue<TreeNode*>& q){
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

vector<int> BFS(TreeNode* root){
    vector<int > vec;
    queue<TreeNode* > q;
    q.push(root);
    while(q.front()!=NULL) {
        TreeNode* cur = q.front();
        vec.push_back(cur->val);
        q.pop();

//        if (cur->left)
//            q.push(cur->left);
//        if (cur->right)
//            q.push(cur->right);

        q.push(cur->left);
        q.push(cur->right);

        cout<<"q.size: ";
        cout<<q.size()<<endl;

    }
    cout<<endl;
    return vec;
}





int main(int argc, char** argv){

    TreeNode* root = new TreeNode(1);
    TreeNode* l1 = new TreeNode(2);
    TreeNode* r1 = new TreeNode(3);

    TreeNode* l2 = new TreeNode(4);
    TreeNode* r2 = new TreeNode(5);

    root->left = l1;
    root->right = r1;

    l1->right = l2;

    bool res;
    res = Solution().isCompleteTree(root);
    cout<<res<<endl;

    vector<int> vec=BFS(root);


    return 0;
}