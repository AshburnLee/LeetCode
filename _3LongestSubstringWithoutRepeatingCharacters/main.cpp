#include <iostream>

#include "LSWRC.h"
#include "LSWRC2.h"

using namespace std;

int main() {

    int res = Solution().lengthOfLongestSubstring("auehery");
    cout<<res<<endl;

    int res2 = Solution2().lengthOfLongestSubstring("auehery");
    cout<<res2<<endl;

    int freq[256] = {0};
    cout<<int('a')<<endl;
    freq['a'] ++;
    cout<<freq[96]<<" "<<freq[97]<<" "<<freq[98]<<endl;
    cout<<freq[96]<<" "<<freq['a']<<" "<<freq[98]<<endl;

    return 0;

}