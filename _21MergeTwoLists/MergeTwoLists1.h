//
// Created by junhui on 08/05/19.
//
#ifndef MERGETWOLISTS_H
#define MERGETWOLISTS_H

#include <iostream>
#include "LinkedListUtil.h"
using namespace std;

class Solution1{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* tempHead = new ListNode(0);  //dummy head
        ListNode* tail = tempHead;
        while(l1 && l2){
            if (l1->val < l2->val){
                tail->next = l1;
                tail = l1;
                l1 = l1->next;
            } else{
                tail->next = l2;
                tail = l2;
                l2 = l2->next;
            }
        }
        if (l1) tail->next = l1;
        else tail->next = l2;

        return tempHead->next;
    }
};

#endif