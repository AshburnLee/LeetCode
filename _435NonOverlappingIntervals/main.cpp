#include "Solution.h"

int main(int argc, char** argv){
	Interval* inter1 = new Interval(1,2);	
	Interval* inter2 = new Interval(4,5);	
	Interval* inter3 = new Interval(6,7);	
	Interval* inter4 = new Interval(7,8);	

	vector<Interval*> input;

	input.push_back(inter1);
	input.push_back(inter2);
	input.push_back(inter3);
	input.push_back(inter4);

	for (auto i: input){
		cout<<i->start<<"->"<<i->end<<endl;
	}
	cout<<endl;

	cout<<Solution().eraseOverLapIntervals(input)<<endl;
	return 0;
}
