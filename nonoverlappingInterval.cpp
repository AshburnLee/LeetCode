#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval():start(0), end(0){}
    Interval(int s, int e):start(s), end(e){}
};

// compare ending points
bool compare2(const Interval& a, const Interval& b){
    if (a.end != b.end)
        return a.end<b.end;
    return a.start<b.start;
}
class Solution {
public:
    //greedy way
    int eraseoverlapGreedy(vector<Interval>& intervals) {
        if(intervals.size() == 0)
            return 0;
        // step1: sort
        sort(intervals.begin(), intervals.end(), compare2);

        int res = 1; //the first interval is valid
        int pre = 0; //index of the previous interval

        for (int i = 1;i<intervals.size(); i++)
            if(intervals[i].start >= intervals[pre].end){
                res ++;
                pre = i;
            }
        return intervals.size() - res;
                
    }
};

int main(int argc, char const *argv[])
{
    vector<Interval> test = {Interval(1,2),Interval(4,5),Interval(2,4),Interval(2,5)};
    for (int i=0;i<test.size();i++){
        cout<<test[i].start<<" "<<test[i].end<<endl;
    }
    cout<<endl;

    sort(test.begin(), test.end(), compare2);
    for (int i=0;i<test.size();i++){
        cout<<test[i].start<<" "<<test[i].end<<endl;
    }
    cout<<endl;

    vector<Interval> test2 = {Interval(1,2), Interval(1,2), Interval(1,2),Interval(1,2)};

    Solution sol;
    int res = sol.eraseoverlapGreedy(test);
    cout<<res<<endl;
    cout<<sol.eraseoverlapGreedy(test2)<<endl;
    return 0;
}
