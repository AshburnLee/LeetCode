#include "Solution.h"

void printInorder(TreeNode* root){
    if (!root) return;

    printInorder(root->left);
    cout<<root->val<<" ";
    printInorder(root->right);
}

int main(int argc, char** argv){
	TreeNode* n1 = new TreeNode(3);
    TreeNode* n2 = new TreeNode(2);
    TreeNode* n3 = new TreeNode(5);
    TreeNode* n4 = new TreeNode(1);
    TreeNode* n5 = new TreeNode(2);
    TreeNode* n6 = new TreeNode(5);

	n1->left = n2; 
	n1->right = n3; 
	n2->left = n4; 
	n2->right = n5;
    n3->right = n6; 
	
	printInorder(n1);
	cout<<"Hola"<<endl;


	vector<int> res = Solution().findFrequentTreeSum(n1);
	
	cout<<endl;
	for (auto i: res)
		cout<<i<<" ";
	cout<<endl;

	return 0;
}
