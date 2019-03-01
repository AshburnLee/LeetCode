#include <iostream>
#include "LinkedListUtil.h"
using namespace std;

class Solution {
public:
    ListNode* temp;
    bool isPalindrome(ListNode* head) {
        temp = head;
        return check(head);
    }

    bool check(ListNode* p) {
        if (NULL == p) return true;
        bool isPal = check(p->next) & (temp->val == p->val);
        temp = temp->next;
        return isPal;
    }
};

int main(int argc, char const *argv[]) {
    LinkedListUtil lu;
    Solution sol;
    int arr[] = {1,3,5,7,7,5,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    ListNode* l = lu.createListList(arr, n);
    lu.printList(l);
    cout<<sol.isPalindrome(l)<<endl;

    return 0;
}
