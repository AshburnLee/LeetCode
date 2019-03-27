//
// Created by junhui on 26/03/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    string countAndSay(int n){
        string arr = "1";
        string res;
        int i = 0;
        while(i<n-1){
            readNumber(arr, res);
            arr.clear();
            for (string::iterator itr=res.begin(); itr!=res.end(); itr++)
                arr.push_back(*itr);
            res.clear();
            i++;
        }
        return arr;
    }
private:
    // read string and
    void readNumber(string& arr, string& res){
        for (int id = 0; id<arr.size(); ){
            char val = arr[id];
            char count = '0';
            while(arr[id] == val){
                id++;
                count++;
            }
            res.push_back(count);
            res.push_back(val);
        }
    }

};



int main(int argc, char** argv){

    Solution sol;
    cout<<sol.countAndSay(1)<<endl;
    cout<<sol.countAndSay(2)<<endl;
    cout<<sol.countAndSay(3)<<endl;
    cout<<sol.countAndSay(4)<<endl;
    cout<<sol.countAndSay(5)<<endl;


    return 0;
}