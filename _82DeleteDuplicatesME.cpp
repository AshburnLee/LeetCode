#include <iostream>
#include "LinkedListUtil.h"

using namespace std;

ListNode *deleteDuplicates2(ListNode *head) {
    if(!head||!head->next)return head;
    ListNode *newhead=0,**phead=&newhead;//phead pointer to new head pointer
    while(head)
    {
        if(head->next&&head->val == head->next->val)
        {//skip all nodes has duplicate value
            int dupval=head->val;
            while(head&&head->val==dupval)head=head->next;
            continue;
        }//assign and advance phead
        else {*phead=head; phead=&((*phead)->next);}
        head=head->next;
    }
    *phead=0;// point the next of last node to NULL
    return newhead;
}

ListNode *deleteDuplicates(ListNode *head) {
    if (!head) return NULL;
    ListNode* Dh = new ListNode(-1);
    Dh->next = head;
    ListNode* q = Dh;
    ListNode* p = head;
    int r1 = -1;
    int r2 = p->val;
    ListNode* T = NULL;

    while (p){
        r1 = r2;
        p = p->next;
        if (p == NULL) break;
        r2 = p->val;
        if (r2 != r1){
            if (T == NULL)
                q=q->next;
            else
                q->next = T->next; T=NULL;
        }
        if (r2 == r1){
            T = p;
            if (p->next == NULL)
                q->next = NULL;
        }
    }
    ListNode* res = Dh->next;
    delete Dh;
    return res;
}

int main(int argc, char const *argv[]) {

    LinkedListUtil lu;
    int arr[] = {1,2,2,3,3,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    ListNode* tmp = nullptr;
    tmp = lu.createListList(arr, n);
    lu.printList(tmp);

    ListNode* res = nullptr;
    res = deleteDuplicates(tmp);
    lu.printList(res);


    return 0;
}
