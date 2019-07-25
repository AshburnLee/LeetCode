#include "Solution.h"

using namespace std;
int main(int argc, char** argv){
	TreeNode* root = new TreeNode(1);
	TreeNode* n1 = new TreeNode(0);
	TreeNode* n2 = new TreeNode(0);
	TreeNode* n3 = new TreeNode(3);

	root->left = n1;
	root->right =n2;
	n1->right = n3;

	int res = 0;
	cout<<Solution().distributeCoins(root)<<endl;
	return 0;
}
