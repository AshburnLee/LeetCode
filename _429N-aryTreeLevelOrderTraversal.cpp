//
// Created by junhui on 24/04/19.
//
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
public:
    int val;
    vector<Node*> children;
    Node(){}
    Node (int _x, vector<Node*> _children){
        val = _x;
        children = _children;
    }
};

class Solution{
public:
    // time: O(N)   92.57%
    //space: O(N)    99.24%
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if (!root)
            return res;

        queue<Node*> q;
        q.push(root);
        while (!q.empty()){
            int curSize = q.size(); // the length of this level
            // store val of nodes in the same level
            vector<int> cur;
            // for every nodes in this level
            for (int i=0; i<curSize; i++){
                Node* curNode = q.front();
                q.pop();
                cur.push_back(curNode->val);
                for (Node* child: curNode->children)
                    q.push(child);
            }
            res.push_back(cur);
        }
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

    Solution sol;
    vector<vector<int>> res = sol.levelOrder(&node1);
    for (vector<int>& i: res ){
        for (int & ii : i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }
    return 0;
}