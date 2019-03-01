#include <iostream>
#include "LinkedListUtil.h"
using namespace std;

// delete linked list
void deleteLinkedList(ListNode* head){
    ListNode* cur = head;
    while(cur != NULL){
        ListNode* del = cur;
        cur = cur->next;
        delete del;
    }
    return;
}

class Solution {
public:
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
};
 
int main(int argc, char const *argv[])
{

    LinkedListUtil lu;
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    ListNode* my = lu.createListList(arr, size);
    lu.printList(my);

    Solution sol;
    ListNode* ym = sol.reverseList(my);
    lu.printList(ym);

    // release memory
    lu.deleteLinkedList(my);
    lu.deleteLinkedList(ym);

    return 0;
}
