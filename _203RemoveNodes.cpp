#include <iostream>
#include "LinkedListUtil.h"

using namespace std;

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

class Solution {
public:
    // need to debug
    ListNode* removeElements2(ListNode* head, int val) {
        if (head == NULL)
            return NULL;

        if (head->val == val && head->next == NULL){
            delete head;
            return NULL;
        }
        while(head->val == val && head != NULL){
            ListNode* del = head;
            head = del->next;
            delete del;
        }

        if (head == NULL)
            return NULL;

        ListNode* cur = head;
        while(cur->next != NULL){
            if (cur->next->val == val){
                ListNode* del = cur->next;
                cur->next = del->next;
                delete del;
            }
            else
                cur = cur->next;
        }
        return head;
    }

    //final dummy head
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;

        ListNode* cur = dummyHead;
        while(cur->next != NULL){
            if (cur->next->val == val){
                ListNode* del = cur->next;
                cur->next = del->next;
                delete del;
            }
            else
                cur = cur->next;
        }
        ListNode* res = dummyHead->next;
        delete dummyHead;
        return res;
    }
};

int main(){
    LinkedListUtil lu;
    int arr[] = {4};
    int n = sizeof(arr)/sizeof(arr[0]);

    ListNode* tmp = NULL;
    tmp = lu.createListList(arr, n);
    lu.printList(tmp);

    Solution sol;
    ListNode* res=sol.removeElements(tmp, 4);
    lu.printList(res);

    lu.deleteLinkedList(tmp);
    lu.deleteLinkedList(res);

    return 0;
}
