#include <iostream>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };


// create a llinked list using an array
ListNode* createListLilst(int arr[], int n){
    if (n == 0)
        return NULL;
    ListNode* head = new ListNode(arr[0]); // create the head
    ListNode* cur = head;
    for (int i=1;i<n;i++){
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }
    return head;
}

// print the whole linked list
void printList(ListNode* head){
    ListNode* cur=head;
    while(cur != NULL){
        cout<<cur->val<<"->";
        cur = cur->next;
    }
    cout<<"NULL"<<endl;
    cout<<endl;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rl1 = reverseList(l1);
        ListNode* rl2 = reverseList(l2);
    }

    // reserse an list
    ListNode* reverseList(ListNode* head){
        ListNode* pre = NULL;
        ListNode* cur = head;
        while (cur != NULL){
            ListNode* nex = cur->next;

            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        return pre;
    }
};

int main(){
    int l1[] = {2,4,3};
    int l2[] = {5,6,4};
    int n = sizeof(l1)/sizeof(l1[0]);
    ListNode* my1 = createListLilst(l1, n);
    ListNode* my2 = createListLilst(l2, n);
    printList(my1);
    printList(my2);


    Solution sol;


    // 1) addition
    ListNode* cur1 = my1;
    ListNode* cur2 = my2;
    while(cur1 != NULL & cur2 != NULL){
        cur2->val = cur1->val + cur2->val;  // l2 as result
        cur1 = cur1->next;
        cur2 = cur2->next;
    }
    //2) increment 
    ListNode* tmp = my2->next;
    ListNode* tmp2 = my2;
    while(tmp != NULL){
        if (tmp->val > 9){
            tmp->val = tmp->val -10;
            tmp2->val = tmp2->val+1;

        }
        tmp = tmp ->next;
        tmp2 = tmp2 ->next;
    }
    // 3) reverse 
    ListNode* res = sol.reverseList(my2);






    printList(res);
    return 0;
}