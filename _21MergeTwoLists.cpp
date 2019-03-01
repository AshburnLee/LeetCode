#include <iostream>
#include "LinkedListUtil.h"
using namespace std;



ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* tempHead = new ListNode(0);  //dummy head
    ListNode* tail = tempHead;
    while(l1 && l2){
        if (l1->val < l2->val){
            tail->next = l1;
            tail = l1;
            l1 = l1->next;
        } else{
            tail->next = l2;
            tail = l2;
            l2 = l2->next;
        }
    }
    if (l1) tail->next = l1;
    else tail->next = l2;

    return tempHead->next;
}

int main(int argc, char const *argv[]) {
    LinkedListUtil lu;
    // original data
    int arr1[] = {23,3456,3465,7456,7890};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {2,3,5,34,56};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    // create linked lists
    ListNode* head1 = lu.createListList(arr1, n1);
    ListNode* head2 = lu.createListList(arr2, n2);
    ListNode* res = mergeTwoLists(head1,head2);
    lu.printList(res);
    return 0;
}
