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
};

class Solution {
public:
    //time: O(N)
    //space : O(N)
    int maxDepth(Node* root) {
        if(!root)
            return 0;

        int res = 1;
        for(Node* child: root->children)
            res = max(res, 1 + maxDepth(child));
        return res;
    }
};

int main(int argc, char** argv){

    return 0;
}
