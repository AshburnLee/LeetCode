#include "Solution.h"

using namespace std;
int main(int argc, char** argv){

	TreeNode* root = new TreeNode(1);	
	TreeNode* n2 = new TreeNode(2);	
	TreeNode* n3 = new TreeNode(3);	
	TreeNode* n4 = new TreeNode(4);

	root->left = n2;
	root->right = n3;
	n2->right = n4;

	/*
	 *		1
	 *		/\
	 *	   2  3
	 *      \
	 *       4
	 * */
	cout<<Solution().findBottomLeftValue(root)<<endl;
	
}

