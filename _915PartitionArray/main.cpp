#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int partitionDisjoint(const vector<int>& A) {
        int length = A.size();
        vector<int> left;
        vector<int> right;
        left.push_back(A[0]);
        
        for(int i=1;i<length; i++)
            right.push_back(A[i]);
        
        int maxLeft=0;
        int minRight=0;
        int i=1;
        bool res=false;
        while(!res){
            maxLeft = *max_element(left.begin(), left.end());
            minRight = *min_element(right.begin(), right.end());
            if(maxLeft > minRight){
		// erase delete item and move items
                right.erase(right.begin());
                left.push_back(A[i++]);
            }else
                res=true;
        }
        return left.size();
    }

    int partitionDisjoint(const vector<int>& A){
    	vector<int> left(A.size());
	vector<int> right(A.size());
	left[0] = A[0];
	right[A.size()-1] = A.back();

	for(int i=1;i<A.size();i++)
	    left[i] = max(left[i-1], A[i]);
	for(int i=A.size()-2; i>=0;i--)
	    right[i] = min(right[i+1], A[i]);
	int res=0;
	for(; res<A.size()-1; res++)
	    if(left[res]<=right[res+1])
		break;
	return res+1;
    }
};

int main() {

    cout<<"自己处理输入输出！"<<endl;
    vector<int> vec;
    int length;
    cin>>length;   
    while(length){
    	int item;
	cin>>item;
	vec.push_back(item);
	length--;
    }
    Solution sol;
    cout<<sol.partitionDisjoint(vec)<<endl;

    return 0;
}
