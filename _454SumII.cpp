#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:

    // O(n^2)
    // O(n^2)
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> record;
        for (int i=0;i<A.size();i++)
            for (int j=0;j<B.size();j++)
                record[A[i] + B[j]] ++;
        int res = 0; // 
        for (int i=0;i<C.size();i++)
            for (int j=0;j<D.size();j++)
                if (record.find(0-C[i]-D[j]) != record.end())
                    res += record[0-C[i]-D[j]];
        return res;
    }

    int fourSumCount2(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> record;
        for (int a:A)
            for (int b:B)
                record[a+b] ++;
        int res = 0; // 
        for (int c:C)
            for (int d:D)
                if (record.find(0-c-d) != record.end())
                    res += record[0-c-d];
        return res;
    }
};

int main(int argc, char const *argv[])
{
    
    
    return 0;
}
