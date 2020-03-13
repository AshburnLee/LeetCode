
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution{
public:
    string customSortString(string S, string T) {
        unordered_map<char, int> Tmap;

        for(int i=0; i<T.size(); i++){
            Tmap[T[i]]++;
        }

        string res;
        for (auto item: S){
            if(Tmap.find(item) != Tmap.end()){
                int count = Tmap[item];
                while(count){
                    res+=item;
                    count--;
                }
                Tmap.erase(item);
            }
        }

        for(unordered_map<char, int>::iterator itr=Tmap.begin(); itr!=Tmap.end(); ++itr){
            int count=itr->second;
            while(count){
                res+=itr->first;
                count--;
            }
        }

        return res;
    }
};

int main(){
    string S = "cba";
    string T = "abbcde";

    Solution sol;
    string res = sol.customSortString(S,T);
    cout<<res<<endl;
    return 0;
}