#include "Solution.h"
#include "Solution2.h"

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

	vector<double> res = Solution().averageOfLevels(n1);

	for (auto i: res){
		cout<<i<<" ";
	}
	cout<<endl;

	vector<double> res2 = Solution2().averageOfLevels(n1);

	for (auto i: res2){
		cout<<i<<" ";
	}
	cout<<endl;
	

	return 0;
}
