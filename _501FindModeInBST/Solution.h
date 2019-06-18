#ifndef _501FINDMODEINBST_SOLUTION_H
#define _501FINDMODEINBST_SOLUTION_H

#include <iostream>
#include <map>
#include <vector>
#include "TreeNode.h"
#include <algorithm>
using namespace std;

/// Inorder traversal, and serialize all the nodes
/// time: O(N)
/// space: O(N)
class Solution{
private:
	map<int, int> nodes;
	vector<pair<int, int>> vec;
	vector<int> res;

    void Inorder(TreeNode* root){
        if (!root) return;
        
        Inorder(root->left);
        
        nodes[root->val]++;
        
        Inorder(root->right);
        
    }
	
	static int compare(const pair<int, int>& a, const pair<int, int>& b){
		return a.second > b.second;
	}

	void sortByValGetRes(){
		for (map<int,int>::iterator itr = nodes.begin(); itr != nodes.end(); itr++){
			vec.push_back(make_pair(itr->first, itr->second));
		}
		sort(vec.begin(), vec.end(), compare);
		
		for (auto itr = vec.begin(); itr!=vec.end(); itr++)
			cout<<itr->first<<":"<<itr->second<<endl;
		cout<<endl;


		/// 
		int i=0, k=vec.size()-1;
		for (int j=1; j<vec.size(); j++){
			if (vec[j].second != vec[i].second){
				k = j-1;
				break;
			}
		}
		cout<<i<<" "<<k<<endl;	
		
		for (int j = i; j<=k; j++){
			res.push_back(vec[j].first);		
		}
	}
public:
    vector<int> findMode(TreeNode* root) {
		
        if(!root) return {};
		if (root->left==NULL && root->right==NULL)
			return vector<int>(1, root->val);
		
		for (auto itr = nodes.begin(); itr!=nodes.end(); itr++)
			cout<<itr->first<<":"<<itr->second<<endl;
		cout<<endl;

        Inorder(root);
		
        
		for (auto itr = nodes.begin(); itr!=nodes.end(); itr++)
			cout<<itr->first<<":"<<itr->second<<endl;
		cout<<endl;


		sortByValGetRes();

		return res;
    }
    
};

#endif
