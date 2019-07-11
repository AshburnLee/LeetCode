//
// Created by junhui on 22/04/19.
//

#ifndef _112SUMPATH_SOLUTION_H
#define _112SUMPATH_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "../util/Tree.h"

using namespace std;

class Solution {
public:
    // iterate all nodes
    // use extra space to store all path
    // time: O(#nodes)  13.05%
    // space: O(height)   5.81%
    bool hasPathSum(TreeNode* root, int sum) {
        boxOfPath = allPathes(root);
        for (auto& item: boxOfPath)
            if (item == sum)
                return true;
        return false;
    }

private:
    vector<int> boxOfPath;

    vector<int> allPathes(TreeNode* root){
        vector<int> res;
        if (root== nullptr)
            return res;
        if (root->left == nullptr && root->right == nullptr){
            res.push_back(root->val);
            return res;
        }

        vector<int> leftS = allPathes(root->left);
        for (auto & i:leftS)
            res.push_back(root->val+i);

        vector<int> rightS = allPathes(root->right);
        for (auto & i: rightS)
            res.push_back(root->val+i);

        return res;
    }
};

#endif 
