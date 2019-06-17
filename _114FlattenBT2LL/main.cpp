#include "Solution.h"

void printPreorder(TreeNode* root){
	if (!root) return;

	cout<<root->val<<" ";
	printPreorder(root->left);
	printPreorder(root->right);
}

int main(int argc, char** argv){
	TreeNode* n1 = new TreeNode(1);
    TreeNode* n2 = new TreeNode(2);
    TreeNode* n3 = new TreeNode(5);
    TreeNode* n4 = new TreeNode(3);
    TreeNode* n5 = new TreeNode(4);
    TreeNode* n6 = new TreeNode(6);

    n1->left = n2; 
    n1->right = n3; 
    n2->left = n4; 

    n3->left = n5; 
    n3->right = n6; 
	
	printPreorder(n1);
	cout<<endl;

	Solution().flatten(n1);
	printPreorder(n1);
	cout<<endl;
	return 0;
}

