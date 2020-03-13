#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution{
public:
        vector<int> arrayRankTransform(vector<int>& arr) {
        vector <int> aux = arr;
        sort(aux.begin(),aux.end());
        int i = 1;
        unordered_map <int,int> m;
        
        for(auto item: aux){
            if(m.find(item) == m.end())
                m[item] = i++;
            else
                continue;
        }
        i = 0;
        for(auto w : arr) 
            aux[i++] = m[w];
        return aux;
    }
    void printMap(unordered_map<int, int>& mp){
    	for(auto i: mp){
	    cout<<i.first<<", "<<i.second<<endl;
	}
	cout<<endl;
    }
};

int main() {
    vector<int> vec = {30,20,40,10};
    Solution soll;
    vector<int> rankVec;
    rankVec = soll.arrayRankTransform(vec);
    for(auto i:rankVec)
	cout<<i<<" ";
    cout<<endl;


    vector<int> arr;
    int num;
    cin>>num;
    while(num){
    	int item;
	    cin>>item;
	    arr.push_back(item);
	    num--;
    }

    vector<int> res;

    Solution* sol = new Solution();
    res = sol->arrayRankTransform(arr);

    for(auto i: res)
	cout<<i<<" ";
    cout<<endl;

    return 0;
}
