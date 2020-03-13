#include <iostream>
#include <vector>

using namespace std;
// 这类问题一般会有个数学规律在里边

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        for(int i=1; i<coordinates.size()-1; i++){
            if( !isLine(coordinates[i-1], coordinates[i], coordinates[i+1]) )
                return false;
        }
        return true;
    }
    bool isLine(vector<int>& p1, vector<int>& p2, vector<int>& p3){
        return (p2[1]-p1[1])*(p3[0]-p2[0])==(p3[1]-p2[1])*(p2[0]-p1[0])?true:false;
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
    cout<<sol->checkStraightLine(points)<<endl;

    return 0;
}
