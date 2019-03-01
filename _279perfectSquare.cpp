#include <vector>
#include <iostream>
#include <queue>
#include <cassert>

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        assert(n>0);
        queue<pair<int, int>> q;
        q.push(make_pair(n,0));
        vector<bool> visited(n+1, false);
        visited[n] = true;

        while(!q.empty()){
            int num = q.front().first;
            int steps = q.front().second;
            q.pop();
            if (num == 0)
                return steps;
            for (int i=1; num-i*i>=0; i++){
                if(!visited[num-i*i]){
                    q.push(make_pair(num-i*i, steps+1) );
                    visited[num-i*i] = true;
                }
            }
        }
        throw invalid_argument("^_^");
    }
};

int main(int argc, char const *argv[]) {
    Solution sol;
    cout<<sol.numSquares(17)<<endl;
    return 0;
}
