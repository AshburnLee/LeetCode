#include <iostream>
#include "LinkedListUtil.h"
using namespace std;

ListNode* partition(ListNode* head, int x) {
    ListNode* dummyHead = new ListNode(0); //c
    ListNode* dummyHead2 = new ListNode(0); //c

    dummyHead->next = head; //c
    ListNode* pre = dummyHead; //c

    ListNode* tmp = new ListNode(0); //c
    dummyHead2 = tmp; //c

    while (head) {
        if (head->val < x){
            tmp->next = new ListNode(head->val);
            tmp = tmp->next;
            // dummyHead2->next = tmp;
            pre->next = head->next;
            head = head->next; // delete
        }else{
            head= head->next;
            pre = pre->next;
        }

    }
    tmp->next = dummyHead->next;
    return dummyHead2->next;
}

int main(int argc, char const *argv[]) {
    LinkedListUtil lu;
    int arr1[] = {1,4,3,2,5,2};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    ListNode* l1 = lu.createListList(arr1, n1);
    lu.printList(l1);

    ListNode* res = partition(l1, 3);
    lu.printList(res);

    return 0;
}
