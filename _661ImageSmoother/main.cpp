#include "imageSmoother.h"

int main(int argc, char** argv){
	vector<vector<int>> M(4, vector<int>(4, 1));
	for (int i=0;i<4;i++)
		M[i][0]=0;
	for (int j=0;j<4;j++)
		M[0][j]=0;
	// show this matrix
	for(auto r:M){
		for(auto i:r)
			cout<<i<<" ";
		cout<<endl;
	}
	
	// call Solution
	cout<<"call Solution"<<endl;
	Solution sol;
		
	vector<vector<int>> res(4, vector<int>(4, 0));
	res = sol.imageSmoother(M);
	for(auto r:res){
		for(auto i:r)
			cout<<i<<" ";
		cout<<endl;
	}
	cout<<"hello iamge smoother"<<endl;
	
	return 0;
}
