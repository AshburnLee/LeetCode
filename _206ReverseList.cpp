//
// Created by junhui on 05/05/19.
//
#include <iostream>
#include "LinkedListUtil.h"
using namespace std;

class Solution {
public:

    //iterative way
    //time: O(N)   100.00%
    // space: O(1)    14.43%
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* cur = head;
        while(cur != NULL){
            ListNode* nex = cur->next;

            cur->next = pre;
            pre = cur;
            cur=nex;
        }
        return pre;
    }

    // recursive way
    // time:O(N)   100.00%
    // space: O(1)   10.03%
    ListNode* reverseList2(ListNode* head){
        if (!head || !head->next) return head;

        ListNode* p = reverseList2(head->next);

        head->next->next = head;
        head -> next = NULL;
        return p;
    }

};
 
int main(int argc, char const *argv[])
{

    LinkedListUtil lu;
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    ListNode* tst = lu.createListList(arr, size);
    lu.printList(tst);

    Solution sol;
//    ListNode* ym = sol.reverseList(tst);
//    lu.printList(ym);

    ListNode* ym2 = sol.reverseList2(tst);
    lu.printList(ym2);

    return 0;
}
