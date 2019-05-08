//
//  Created by junhui on 08/05/19.
//
#include <iostream>
#include "MergeTwoLists1.h"
#include "MergeTwoLists2.h"

int main() {

    // original data
    int arr1[] = {4,6,7,30,60};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {2,3,5,34,56};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    // create linked lists
    LinkedListUtil lu;

    // test solution1 -------------------
    ListNode* head1 = lu.createListList(arr1, n1);
    ListNode* head2 = lu.createListList(arr2, n2);

    ListNode* res1 = Solution1().mergeTwoLists(head1, head2);
    lu.printList(res1);

    // test solution2--------------------
    ListNode* head3 = lu.createListList(arr1, n1);
    ListNode* head4 = lu.createListList(arr2, n2);
    ListNode* res2 = Solution2().mergeTwoLinkedLists(head3, head4);
    lu.printList(res2);

    return 0;
}