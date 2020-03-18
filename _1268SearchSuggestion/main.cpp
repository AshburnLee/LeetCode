#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int wordLength = searchWord.size();
        vector<vector<string>> res(wordLength, vector<string>());
        // sort lexicographically
        sort(products.begin(), products.end());

        // for the first vector of res
        for(int i=0;i<products.size(); i++){
            if(products[i][0] == searchWord[0])
                res[0].push_back(products[i]);
        }

        // for the rest of the res
        for(int j=1;j<searchWord.size(); j++){
            for(int i=0; i<res[j-1].size(); i++){
                if(res[j-1][i][j] == searchWord[j])
                    res[j].push_back(res[j-1][i]);
            }
        }

        // for each vector only three results are needed
        for(vector<string>& vec: res){
            if(vec.size()>3){
                vec.erase(vec.begin()+3, vec.end());
            }
        }

        return res;
    }
};

int main() {
    vector<string> products = {"mobile","mouse","moneypot","monitor","mousepad"};
    string searchWord = "mouse";

    Solution sol;
    vector<vector<string>> ans = sol.suggestedProducts(products, searchWord);

    for(auto item: ans){
        for(auto j:item)
            cout<<j<<" ";
        cout<<endl;
    }

    cout<<endl;

    vector<string> products2 = {"bags","baggage","banner","box","cloths"};
    string searchWord2 = "bags";

    Solution sol2;
    vector<vector<string>> ans2 = sol2.suggestedProducts(products2, searchWord2);

    for(auto item: ans2){
        for(auto j:item)
            cout<<j<<" ";
        cout<<endl;
    }

    return 0;
}
