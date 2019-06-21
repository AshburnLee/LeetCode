#include "Solution.h"

void printTree(TreeNode* root){
	if (!root) return;

	cout<<root->val<<" ";

	printTree(root->left);
	printTree(root->right);
	cout<<endl;
}
int main(int argc, char** argv){

	vector<int> nums = {10,20,30,40,50,60,70,80,90};
	TreeNode* root = Solution().sortedArrayToBST(nums);
	printTree(root);

	cout<<*(nums.begin()+1)<<" "<<*(nums.end()+1)<<endl;
	return 0;
}
