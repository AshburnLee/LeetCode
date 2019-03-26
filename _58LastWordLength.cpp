//
// Created by junhui on 26/03/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    //time: O(N)
    //space: O(1)
    int lengthOfLastWord(string s){
        int rId = s.length()-1;
        while (s[rId] == ' ')
            rId--;

        int count=0;
        for (int i = rId; i>=0; i--){
            if (s[i] !=' ')
                count++;
            else if(s[i]==' ' || i==0)
                return count;
        }
        return count;
    }
};

int main(int argc, char** argv){
    string s = "hey ";
    cout<<s.length()<<endl;
    cout<<Solution().lengthOfLastWord(s)<<endl;

    return 0;
}
