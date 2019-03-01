#include <iostream>
#include "LinkedListUtil.h"

using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {

        if (node == NULL) return;
        if (node->next == NULL) delete node;
        node->val = node->next->val;
        ListNode* del = node->next;
        node->next = del->next;
        delete del;
        return;
    }
};
int main(int argc, char const *argv[]) {
    LinkedListUtil lu;
    Solution sol;

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    ListNode* tmp = NULL;
    tmp = lu.createListList(arr, n);
    lu.printList(tmp);

    sol.deleteNode(tmp->next->next);
    lu.printList(tmp);


    return 0;
}
