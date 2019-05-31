#ifndef _223RECTANGLEAREA_SOLUTION_H
#define _223RECTANGLEAREA_SOLUTION_H

#include <iostream>
using namespace std;
/// time: O(1)
/// space: O(1)
class Solution{
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        long area1 = (C-A) * (D-B);
        long area2 = (G-E) * (H-F);
        int x,y;

        if (B>H||E>C||F>D||A>G)
            return area1 + area2;
        
        else{
            x = min(G,C) - max(A,E);
            y = min(D,H) - max(B,F);
            return area1 + area2 - x*y;  
        }
    }
};



#endif