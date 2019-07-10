#include "Solution.h"
#include "Solution2.h"

int main(int argc, char** argv){
	Interval* inter1 = new Interval(1,2);	
	Interval* inter2 = new Interval(2,3);	
	Interval* inter3 = new Interval(1,3);	
	Interval* inter4 = new Interval(3,4);	

	vector<Interval*> input;

	input.push_back(inter1);
	input.push_back(inter2);
	input.push_back(inter3);
	input.push_back(inter4);

	for (auto i: input){
		cout<<i->start<<"->"<<i->end<<endl;
	}
	cout<<endl;

	cout<<"Solution: \t";
	cout<<Solution().eraseOverLapIntervals(input)<<endl;

	vector<vector<int>> intervals = {{1,2},{2,3},{1,3},{3,4}};

	cout<<"SOlution2: \t";
	cout<<Solution2().eraseOverLapIntervals(intervals)<<endl;
	return 0;
}
