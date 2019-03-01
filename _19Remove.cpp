#include <iostream>
#include "LinkedListUtil.h"

using namespace std;

class Solution {
public:
    // O(n)
    // O(1)
    //
    ListNode* removeNthFromEnd2(ListNode* head, int n) {
        // iterator the list, return the length
        if(head ==NULL) return NULL;
        int length = 0;
        ListNode* Dhead = new ListNode(-1);
        Dhead -> next = head;
        while(head){
            length ++;
            head = head->next;
        }
        // delete the (length-n)th node
        ListNode* del = Dhead;
        for (int i=1;i<=length-n;i++){
            del = del->next;
        }
        del->next = del->next->next;

        return Dhead->next;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* Dhead = new ListNode(-1);
        Dhead->next = head;
        ListNode* q = Dhead;
        ListNode* p = Dhead;
        // move q n+1 times
        for (int i=1; i<=n+1; i++)
            q = q->next;
        // move p & q
        while (q){
            q=q->next;
            p=p->next;
        }
        // delete the node behind p
        // 1> p->next = p->next->next;
        // 2>
        ListNode* del = p->next;
        p->next = del->next;
        delete del;

        // return
        ListNode* res = Dhead->next;
        delete Dhead;
        return res;
    }
};

int main(int argc, char const *argv[]) {
    LinkedListUtil lu;
    Solution sol;

    int arr[] = {1};
    int n = sizeof(arr)/sizeof(arr[0]);

    ListNode* tmp = NULL;
    tmp = lu.createListList(arr, n);
    lu.printList(tmp);

    // call fucntion
    ListNode* res = NULL;
    res = sol.removeNthFromEnd(tmp,1);
    lu.printList(res);
    return 0;
}
