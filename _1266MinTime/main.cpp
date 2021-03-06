#include <iostream>
#include <vector>

using namespace std;
class Solution{
public:
    int minTimeToVisitAllPositions(vector<vector<int>>& points){
	int res=0;
	for(int i=1; i<points.size(); i++){
	    res+=minTimeTwoPoints(points[i-1], points[i]);
	}
	return res;
    }

    int minTimeTwoPoints(vector<int>& p1, vector<int>& p2){
        int dy = abs(p1[1] - p2[1]);
        int dx = abs(p1[0] - p2[0]);
	int res = min(dy, dx) + abs(dx-dy);
        //cout<<res<<" "<<endl;
	return res;	
    }
};

int main() {
    vector<vector<int>> points;
    int numPoints;
    cin>>numPoints;
    while(numPoints!=0){
    	vector<int> p;
	int x,y;
	cin>>x;
	cin>>y;
	p.push_back(x);
	p.push_back(y);
	points.push_back(p);
	numPoints--;
    }
    for(auto i:points)
	cout<<i[0]<<" "<<i[1]<<endl;


    Solution* sol = new Solution();
    cout<<sol->minTimeToVisitAllPositions(points)<<endl;

    return 0;
}
