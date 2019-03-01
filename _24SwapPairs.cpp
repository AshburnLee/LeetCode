#include <iostream>
#include "LinkedListUtil.h"

using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* Dh = new ListNode(-1);
        Dh->next = head;
        ListNode* pre = Dh;

        while(pre->next && pre->next->next){
            ListNode* n1 = pre->next;
            ListNode* n2 = n1->next;
            ListNode* N = n2->next;

            n2->next = n1;
            n1->next = N;
            pre->next = n2;

            pre = n1;

        }
        return Dh->next;
    }
};
int main(int argc, char const *argv[]) {
    LinkedListUtil lu;
    Solution sol;
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    ListNode* tmp = nullptr;
    tmp = lu.createListList(arr, n);
    lu.printList(tmp);

    ListNode* res = nullptr;
    res = sol.swapPairs(tmp);
    lu.printList(res);
    return 0;
}
