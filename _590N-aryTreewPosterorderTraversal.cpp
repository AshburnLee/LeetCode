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
    void travel(Node* root, vector<int>& res){
        if (!root)
            return;

        for (Node* chld : root->children)
            travel(chld, res);

        res.push_back(root->val);
    }
public:
    //time: 34.18%
    //space: 100.00%
    vector<int> postorder(Node* root){
        vector<int> res;
        travel(root, res);

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
    sol.postorder(&node1);

    return 0;
}



