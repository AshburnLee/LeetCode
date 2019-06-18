#include "Solution.h"
#include "Solution2.h"

void printInorder(TreeNode* root){
    if (!root) return;

    printInorder(root->left);
    cout<<root->val<<" ";
    printInorder(root->right);
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
	
	printInorder(n1);
	cout<<endl;

	cout<<Solution().isValidBST(n1)<<endl;
	cout<<Solution2().isValidBST(n1)<<endl;

	return 0;
}
