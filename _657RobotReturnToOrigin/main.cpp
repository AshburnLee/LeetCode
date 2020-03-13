#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.size()%2 != 0)
            return false;

        unordered_map<char, int> mp;
        for(int i=0;i<moves.size(); i++){
            mp[moves[i]]++;
        }

        if(mp['U']==mp['D'] && mp['L']==mp['R'])
            return true;
        return false;
    }

    bool judgeCircle2(string moves) {
        if(moves.size()%2!=0) return false;
        int x=0, y=0;
        for(auto i:moves){
            if(i=='U') y++;
            if(i=='D') y--;
            if(i=='L') x--;
            if(i=='R') x++;
        }
        return x==0 && y==0;
    }
};

int main() {

    string moves;
    int length;
    cin>>length;   
    while(length){
    	char item;
	    cin>>item;
	    moves.push_back(item);
	    length--;
    }

    Solution sol;
    cout<<sol.judgeCircle(moves)<<endl;

    return 0;
}
