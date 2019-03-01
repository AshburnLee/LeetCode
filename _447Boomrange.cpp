#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res = 0;
        for (int i=0;i<points.size();i++){
            unordered_map<int, int> record;  // dis---#of ppoints
            for (int j=0;j<points.size();j++)
                if (j != i) record[dis(points[i], points[j])]++;

            // iterator the map
            for (unordered_map<int,int>::iterator itr=record.begin(); itr!=record.end();itr++)
                if (itr->second >= 2)
                    res += (itr->second)*(itr->second -1);
        }
        return res;
    }
private:
    // compute dis^2
    int dis( pair<int,int>& pa, pair<int,int>& pb){
        return (pa.first-pb.first)*(pa.first-pb.first)+
                (pa.second-pb.second)*(pa.second-pb.second);
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
