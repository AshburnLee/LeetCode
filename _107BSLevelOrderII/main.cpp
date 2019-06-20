#include "Solution.h"

int main(int argc, char** argv){
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n2 = new TreeNode(2);
	TreeNode* n3 = new TreeNode(3);

	TreeNode* n4 = new TreeNode(4);
	TreeNode* n5 = new TreeNode(5);
	TreeNode* n6 = new TreeNode(6);

	n1->left = n2;
	n1->right = n3;

	n2->left = n4;
	n3->left = n5;
	n3->right = n6;

	vector<vector<int>> res = Solution().levelOrderBottum(n1);

	for (auto i: res){
		for (auto ii:i)
			cout<<ii<<" ";
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
