//
// Created by junhui on 26/03/19.
//
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class Solution{
private:
//    bool equals(vector<int>& p, vector<int>& q){
//             if (p.size() != q.size())
//            return false;
//        for (auto itr1 = p.begin(),itr2=q.begin(); itr1!=p.end(), itr2!=q.end(); itr1++, itr2++)
//            if (*itr1 != *itr2){
//                return false;
//            }
//
//        return true;
//    }
public:
    // time: O(N). N is the number of nodes in the deeper tree
    // space: O(M). M is the depth of the deeper tree
    /*pass two tree nodes, and return true if two nodes have the same value, false otherwise*/
    bool isSameTree(TreeNode* p, TreeNode* q){
        if (!p && !q)
            return true;

        else if ( p && q && p->val==q->val )
            return isSameTree( p->right, q->right ) && isSameTree( p->right, q->right );
        else
            return false;
    }

};

int main(int argc, char** argv){

    TreeNode* root1 = new TreeNode(1);
    TreeNode* left1 = new TreeNode(2);
    root1->left = left1;
    TreeNode* right1 = new TreeNode(3);
    root1->right = right1;

    TreeNode* root2 = new TreeNode(1);
    TreeNode* left2 = new TreeNode(2);
    root2->left = left2;
    TreeNode* right2 = new TreeNode(3);
    root2->right = right2;


    Solution sol;
    cout<<sol.isSameTree(root1, root2)<<endl;

    return 0;
}
