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

// solve it by applying in order traverse;
// dose not work when nodes have the same values!
// need come up with a universally correct solution
class Solution{
private:
    vector<int> resP;
    vector<int> resQ;

private:
    bool equals(vector<int>& p, vector<int>& q){
             if (p.size() != q.size())
            return false;
        for (auto itr1 = p.begin(),itr2=q.begin(); itr1!=p.end(), itr2!=q.end(); itr1++, itr2++)
            if (*itr1 != *itr2){
                return false;
            }

        return true;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q){

        if (p == NULL && q == NULL)
            return true;

        inOrderP(p);
        inOrderQ(q);

        return equals(resP, resQ);
    }

    void inOrderP(TreeNode* p){
        if (p != NULL ){
            inOrderP(p->left);
            resP.push_back(p->val);
            inOrderP(p->right);
        }
    }
    void inOrderQ(TreeNode* p){
        if (p != NULL ){
            inOrderQ(p->left);
            resQ.push_back(p->val);
            inOrderQ(p->right);
        }
    }
};

int main(int argc, char** argv){
    TreeNode* root1 = new TreeNode(1);
    TreeNode* left1 = new TreeNode(2);
    root1->left = left1;
    TreeNode* right1 = new TreeNode(3);
    root1->right = right1;

    TreeNode* root2 = new TreeNode(1);
//    TreeNode* left2 = new TreeNode(2);
//    root2->left = left2;
    TreeNode* right2 = new TreeNode(2);
    root2->right = right2;


    Solution sol;
    sol.inOrderP(root1);
    sol.inOrderQ(root2);
//    sol.printResP();
//    sol.printResQ();
    cout<<sol.isSameTree(root1, root2)<<endl;

//    vector<int> a = {2,1,3};
//    vector<int> b = {2,1};
//
//    cout<<sol.equals(a,b)<<endl;
    return 0;
}
