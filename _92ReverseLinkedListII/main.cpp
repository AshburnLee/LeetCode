//
// Created by junhui on 12/05/19.
//

#include <iostream>
#include "ReverseLinkedListII.h"
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    LinkedListUtil llu;
    ListNode* myList;
    myList = llu.createListList(arr, n);
    llu.printList(myList);

    Solution sol;
    ListNode* myList2;
//    myList2 = sol.reverseList(myList, NULL);
//    llu.printList(myList2);

    myList2 = sol.reverseBetween(myList, 1, 5);
    llu.printList(myList2);

    return 0;
}