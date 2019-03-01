#include <iostream>
#include <vector>
#include <algorithm>

class GreedyKids {
public:
    // pass: two vectors
    // return: the maxmum content
    // function: how many kids can be satidfied mostly
    int solution(std::vector<int> bread, std::vector<int> kids){
        // sort them
        std::sort(bread.begin(), bread.end(), std::greater<int>());
        std::sort(kids.begin(), kids.end(), std::greater<int>());

        int bi=0;  // index of bread
        int ki=0;  // index of bread
        int result=0;
        while(bi < bread.size() && ki < kids.size()){
            if (bread[bi]>=kids[ki]){
                bi++;
                ki++;
                result++;
            }else{
                ki++;
            }
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
    std::vector<int> bread = {1,2,3,4};
    std::vector<int> kids = {5,4,2,1};
    GreedyKids gk;
    int res = gk.solution(bread, kids);
    std::cout<<res<<std::endl;
    return 0;
}
