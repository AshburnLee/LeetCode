//
// Created by junhui on 12/05/19.
//

#ifndef _92REVERSELINKEDLISTII_REVERSELINKEDLISTII_H
#define _92REVERSELINKEDLISTII_REVERSELINKEDLISTII_H

#include "LinkedListUtil.h"
#include <iostream>
#include <cassert>
using namespace std;

/// time: O(N)  98.65%
/// space: O(1)  60.67%
class Solution{
private:
    /// reverse node from head to tail-1, return tatil-1 as the new head
    ListNode* reverseList(ListNode* head, ListNode* tail){
        ListNode* pre = tail;
        ListNode* cur = head;
        while (cur != tail){
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }

public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        assert(m<=n);
        if (!head) return head;
        if (m==n) return head;

        ListNode* dhead = new ListNode(-1);
        dhead->next = head;

        ListNode* nodeM = dhead;
        for (int i=0; i<m; i++)
            nodeM = nodeM->next;

        ListNode* nodeN = dhead;
        for (int i=0; i<n+1; i++)
            nodeN = nodeN->next;

        ListNode* subHead = dhead;
        for (int i=0; i<m-1; i++)
            subHead = subHead->next;


        subHead->next = reverseList(nodeM, nodeN);
        cout<<subHead->next->val<<endl;

        return dhead->next;
    }
};


#endif //_92REVERSELINKEDLISTII_REVERSELINKEDLISTII_H
