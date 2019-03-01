#include <iostream>
#include "LinkedListUtil.h"
using namespace std;

//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
// };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL, *prev = NULL;
        int carry = 0;
        while (l1 || l2) {
            int v1 = l1? l1->val: 0;
            int v2 = l2? l2->val: 0;
            int tmp = v1 + v2 + carry;
            carry = tmp / 10;
            int val = tmp % 10;
            ListNode* cur = new ListNode(val);
            if (!head) head = cur;
            if (prev) prev->next = cur;
            prev = cur;
            l1 = l1? l1->next: NULL;
            l2 = l2? l2->next: NULL;
        }
        if (carry > 0) {
            ListNode* l = new ListNode(carry);
            prev->next = l;
        }
        return head;
    }
};

int main(){
    LinkedListUtil lu;
    int arr1[] = {7,8,9};
    int arr2[] = {5,6,4 };
    int n = sizeof(arr1)/sizeof(arr1[0]);
    ListNode* l1 = lu.createListLilst(arr1, n);
    ListNode* l2 = lu.createListLilst(arr2, n);
    lu.printList(l1);
    lu.printList(l2);

    Solution sol;
    ListNode* res = sol.addTwoNumbers(l1,l2);
    lu.printList(res);


    int v1 = l1? l1->val: 0;
    int v2 = l2? l2->val: 0;
    cout<<v1<<" "<<v2<<endl;
}