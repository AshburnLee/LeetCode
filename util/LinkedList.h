#ifndef _UTIL_LINKEDLIST_H
#define _UTIL_LINKEDLIST_H

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class LinkedList {
public:
    LinkedList(){}
    ~LinkedList(){}
    // create a llinked list using an array
    ListNode* createListList(vector<int>& arr){ 

        if (arr.empty())
            return NULL;
        ListNode* head = new ListNode(arr[0]); // create the head
        ListNode* cur = head;
        for (int i=1; i<arr.size(); i++){
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
