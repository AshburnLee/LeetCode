#include <iostream>
#include "Solution.h"
#include "Solution2.h"

using namespace std;

int main(int argc, char** argv){
	vector<int> nums = {1,3,2,4,3,5,4,6,5,7,6,8,-2,-4,-5,-6,-7};
	NumArray* obj = new NumArray(nums);
	cout<<obj->sumRange(0, 2)<<endl;
	cout<<obj->sumRange(2, 5)<<endl;
	cout<<obj->sumRange(3, 8)<<endl;
	cout<<obj->sumRange(5, 14)<<endl;
	cout<<obj->sumRange(5, 13)<<endl;
	
	cout<<endl;
	NumArray2* obj2 = new NumArray2(nums);
	cout<<obj2->sumRange(0, 2)<<endl;
	cout<<obj2->sumRange(2, 5)<<endl;
	cout<<obj2->sumRange(3, 8)<<endl;
	cout<<obj2->sumRange(5, 14)<<endl;
	cout<<obj2->sumRange(5, 13)<<endl;
	return 0;
}
