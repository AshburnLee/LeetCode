#include <iostream>

using namespace std;

class Solutions {
    private:

        //pass: the number of stairs
        //return:the number of ways to climb
        int calculateWays(int numStairs) {
            // terminate conditions
            if (numStairs == 0 || numStairs == 1)
                return 1;
        
            // if (numStairs == 2)
            //     return 2;

            // general case
            return calculateWays(numStairs-1) + calculateWays(numStairs-2);
        }
    public:
        //pass: the number of stairs
        //return: the number of ways to climb
        int climstairs(int numStairs) {
            return calculateWays(numStairs);
        }
};

int main() {

    Solutions* sol = new Solutions();
    int ret = sol->climstairs(50);
    cout<<"Number if ways: "<<ret<<endl;
    free(sol);
}