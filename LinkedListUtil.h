#ifndef LINKEDLISTUTIL_H
#define LINKEDLISTUTIL_H

#include <iostream>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class LinkedListUtil {
public:
    LinkedListUtil(){}
    ~LinkedListUtil(){}
    // create a llinked list using an array
    ListNode* createListList(int arr[], int n){  // 此处给出用户给出n值
        // int n = sizeof(arr)/sizeof(arr[0]);
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

    // return the length of the linked list
    int lengthOfList(ListNode* head){
        int length=0;
        while(head){
            length ++;
            head=head->next;
        }
        return length;
    }
    // delete linked list
    void deleteLinkedList(ListNode* head){
        ListNode* cur = head;
        while(cur != NULL){
            ListNode* del = cur;
            cur = cur->next;
            delete del;
        }
        return;
    }
};

#endif
