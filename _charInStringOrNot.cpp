#include <iostream>
using namespace std;

bool func(string, char);

int main(int argc, char const *argv[])
{
    string str("abcde");
    cout<<func(str, 'z')<<endl;
    
    return 0;
}

bool func(string s, char test){
    int freq[127] = {0};
    for (int i=0;i<s.size();i++)
        freq[s[i]] ++;
    if (freq[int(test)] == 0) return false;
    for (int _: freq) cout<<_<<" ";
    cout<<endl;
    return true;
}
