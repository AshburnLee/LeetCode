//
// Created by junhui on 08/05/19.
//
#ifndef MERGETWOLIST_H
#define MERGETWOLIST_H

#include <iostream>
#include "LinkedListUtil.h"
using namespace std;

class Solution2{
public:
    ListNode* mergeTwoLinkedLists(ListNode* l1, ListNode* l2){
        // convert linkedlists to arrays
        // 1) get length
        int n1 = linkedlistLen(l1);
        int n2 = linkedlistLen(l2);

        // 2) convert Linked List to a arr
        int* arr1 = new int[n1];
        arr1 = toArray(l1, n1);
        int* arr2 = new int[n2];
        arr2 = toArray(l2, n2);


        //3) merge two lists
        int i=0,j=0,count = 1;
        ListNode* Dhead = new ListNode(-1);
        ListNode* cur = Dhead;
        while(i<n1 || j<n2){
            // 1) check bound crossing
            if (i>=n1){
                cur->next = new ListNode(arr2[j++]);
                cur = cur->next;
                count++;
            }else if (j>=n2){
                cur->next = new ListNode(arr1[i++]);
                cur = cur->next;
                count++;
            }
                // 2) when i, j are valid
            else if (arr1[i] <= arr2[j]){
                cur->next = new ListNode(arr1[i++]);
                cur = cur->next;
                count++;
            }
            else if(arr1[i] > arr2[j])
            {
                cur->next = new ListNode(arr2[j++]);
                cur = cur->next;
                count++;
            }
        }

        ListNode* head = Dhead->next;

        return head;
    }

private:
    int linkedlistLen(ListNode* head){
        ListNode* cur=head;
        int count = 0;
        while (cur != NULL){
            count++;
            cur = cur->next;
        }
        return count;
    }

    int* toArray(ListNode* head, int n){
        int* arr = new int[n];
        ListNode* cur = head;
        int i=0;
        while(cur != NULL && i < n){
            arr[i++] = cur->val;
            cur = cur->next;
        }
        return arr;
    }
};


#endif