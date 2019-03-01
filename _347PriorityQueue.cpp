#include <cassert>
#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        assert(k>0);
        // <item, frequent> 
        unordered_map<int, int> freq;
        for (int i=0;i<nums.size();i++)
            freq[nums[i]]++;

        assert(k <= freq.size());

        // min heap
        // <frequent, item>
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int> >> pq;
        for (umordered_map<int, int>::iterator itr=freq.begin();itr!=freq.end(),itr++){
            if (freq.size() == k){
                if(itr->second > pq.top().first){
                    pq.pop();
                    pq.push(make_pair(itr->second, itr->first));
                }
            }
            else{
                pq.push(make_pair(itr->second, itr->first));
            }
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
