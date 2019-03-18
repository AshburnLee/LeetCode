//
// Created by junhui on 18/03/19.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    // time: O(max(M,N))
    // space: O(2*max(M,N))
    vector<int> addToArrayForm(vector<int>& A, int K){
        // prepare vectork
        vector<int> vectork;
        int yu = 0;
        while ( K > 0 ){
            yu = K%10;
            K = K/10;
            vectork.push_back(yu);
        }

        reverseVector(vectork);

        // logic
        vector<int> res;
        int carry=0;
        int i = A.size()-1, j=vectork.size()-1;
        while (i>=0||j>=0||carry != 0){
            if(i>=0)
                carry+=A[i--];
            if(j>=0)
                carry+=vectork[j--];
            res.push_back(carry%10);
            carry/=10;
        }
        reverseVector(res);
        return res;
    }

    void reverseVector(vector<int>& vec){
        for (int i=0; i<vec.size()/2; i++){
            swap(vec[i], vec[vec.size()-1-i]);
        }
    }
};

int main(int argc, char** argv){

    vector<int> A(1,1200);

    int K = 23456;

    vector<int> res = Solution().addToArrayForm(A, K);

    for (auto _: res)
        cout<<_<<" ";
    cout<<endl;

    return 0;
}