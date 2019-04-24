//
// Created by junhui on 24/04/19.
//

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int val;
    vector<Node*> children;
    Node(){};
    Node (int _x, vector<Node*> _children){
        val = _x;
        children = _children;
    }
};

class Solution{
private:
    void func(Node* root, vector<int>& res){
        if (!root)
            return;

        res.push_back(root->val);
        for (Node* chld : root->children)
            func(chld, res);
    }
public:
    //time: 16.89%
    //space: 100.00%
    vector<int> preorder(Node* root){
        vector<int> res;
        func(root, res);

        for (int& i:res)
            cout<<i<<" ";
        cout<<endl;

        return res;
    }
};

int main(int argc, char** argv){
    // construct a tree
    Node node5;
    node5.val = 5;
    Node node6;
    node6.val = 6;
    Node node3;
    node3.val = 3;

    vector<Node*> child3;
    child3.push_back(&node5);
    child3.push_back(&node6);
    node3.children = child3;

    Node node2;
    node2.val = 2;
    Node node4;
    node4.val = 4;

    Node node1;
    node1.val = 1;
    vector<Node*> child1;
    child1.push_back(&node3);
    child1.push_back(&node2);
    child1.push_back(&node4);
    node1.children = child1;

    cout<<node1.children[0]->children[0]->val<<endl;

    Solution sol;
    sol.preorder(&node1);

    return 0;
}


