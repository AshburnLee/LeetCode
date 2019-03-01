#include <iostream>

using namespace std;

class GreedySubsequnce {
public:
    // pass: two char vectors:s&t
    // return: if s is a subsequnce of t
    bool solution(string s, string t){
        int i=0;
        int j=0;
        bool res = true;

        while(i < s.length() && j < t.length() ){
            if (s.at(i) == t.at(j)){
                i++;
                j++;
            }else{
                j++;
                if (j == t.length() )
                    res = false;
            }
        }
        return res;
    }
};  

int main(int argc, char const *argv[])
{
    string s = "axc";
    string ss = "abc";
    string t = "ahnbdfc";

    GreedySubsequnce gs;
    cout<<gs.solution(s, t)<<endl;
    cout<<gs.solution(ss, t)<<endl;

    return 0;
}
