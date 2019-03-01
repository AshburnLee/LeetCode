#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    //final solution
    int maxArea(vector<int>& height){
        int maxWater = 0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int h = min(height[i], height[j]);
            maxWater = max(maxWater, h*(j-i));
            while(height[i]<=h && i<j) i++; 
            while(height[j]<=h && i<j) j--; 
        }
        return maxWater;
    }

    // 
    int maxArea2(vector<int>& height) {
        assert(height.size() >= 2);
        if(height.size() == 0 || height.size() == 1) return 0;

        int res = 0;  // max 
        for (int i=0;i<height.size(); i++){
            for (int j=i+1; j<height.size(); j++){
                int tmp = (j-i)*height[smallerOf(height,i,j)];
                if(tmp > res) res=tmp;
            }
        }
        return res;
    }

    //return the index of the smaller item
    int smallerOf(vector<int>& arr, int indexa, int indexb){
        if (arr[indexa] < arr[indexb]) return indexa;
        else return indexb;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    vector<int> test = {1,8,6,2,5,4,8,3,7};
    cout<<sol.maxArea(test)<<endl;
    
    return 0;
}
