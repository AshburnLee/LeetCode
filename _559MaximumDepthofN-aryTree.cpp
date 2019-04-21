//
// Created by junhui on 06/04/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }

    void printChild(){
        for (Node* child: children)
            cout<<child->val<<" ";
        cout<<endl;
    }
};

class Solution {
public:
    //time: O(N)
    //space : O(N)
    int maxDepth(Node* root) {
        if(!root)
            return 0;

        int res = 1;

        // if root has children,
        // otherwise return res=1;
        for(Node* child: root->children)
            res = max(res, 1 + maxDepth(child));

        return res;
    }

};

int main(int argc, char** argv){

    //construct the following tree:
    //           1
    //         /| \
    //        3 2 4
    //       /\
    //      5  6
    //        /
    //       7

    Node node7;
    node7.val = 7;
    vector<Node*> children6 = {&node7};

    Node node5;
    node5.val = 5;
    Node node6(6, children6);

    vector<Node*> children3 = {&node5, &node6};
    Node node3(3, children3);
    Node node2;
    node2.val = 2;
    Node node4;
    node4.val = 4;

    vector<Node*> children1 = {&node3, &node2, &node4};
    Node node1(1, children1);

    // show children if it has
//    node1.printChild();
//    node3.printChild();

    Solution sol;
    cout<<sol.maxDepth(&node1)<<endl;


    return 0;
}
