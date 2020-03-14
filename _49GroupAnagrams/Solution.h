#ifndef MAIN_CPP_SOLUTION_H
#define MAIN_CPP_SOLUTION_H

#include <vector>
#include <unordered_map>

using namespace std;

namespace MySpace{

    void printRes(vector<vector<string>>& res){
        for(const auto& group:res){
            for(const auto& str: group)
                cout<<str<<" ";
            cout<<endl;
        }
    }

    class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string> &strs) {
            vector<vector<string>> ans;
            unordered_map<string, int> record;

            for(const auto& s: strs){
                string ss("00000000000000000000000000");  // 26 bits
                for(const auto& bit: s){
                    ss[bit-'a']++;
                }

                if(record.find(ss) != record.end()){
                    // if 'ss' is in the map, push th cooresponding 's' in the cooresponding group.
                    ans[record[ss]].push_back(s);
                }else {
                    // if not in map, add this 's' as a group in 'ans'
                    ans.push_back({s});
                    // set the 'value' of 'ss' as the group index in 'ans'
                    record[ss] = ans.size() - 1;
                }
            }
            return ans;
        }
    };
}

#endif //MAIN_CPP_SOLUTION_H