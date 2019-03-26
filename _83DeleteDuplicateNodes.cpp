//
// Created by junhui on 26/03/19.
//

#include <iostream>
#include <vector>

using namespace std;

struct ListNode{
    int value;
    ListNode* next;
    ListNode(int x):value(x), next(NULL){}
};

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head){
        if (head == NULL)
            return NULL;

        ListNode* cur = head;
        ListNode* nex = cur->next;

        while(nex != NULL){
            if(nex->value != cur->value){
                cur = cur->next;
                nex = cur->next;
            }
            else{
                cur->next = nex->next;
                nex = cur->next;
            }
        }
        return head;
    }
};

// create a linked list
ListNode* createLinkedList(vector<int>& vec ){
    int n = vec.size();
    if (n == 0)
        return NULL;
    ListNode* head = new ListNode(vec[0]);
    ListNode* cur = head;
    for (int i=1; i<n; i++){
        cur->next = new ListNode(vec[i]);
        cur = cur->next;
    }
    return head;
}

// print a linked list
void printLinkedList(ListNode* head){
    ListNode* cur = head;
    while (cur){
        cout<<cur->value<<"->";
        cur = cur->next;
    }
    cout<<"null"<<endl;
    return;
}

int main(int argc, char** argv){
    vector<int> arr = {1,1,2,2,3,6,4,4};
    ListNode* head = createLinkedList(arr);
    printLinkedList(head);

    ListNode* head2 =  Solution().deleteDuplicates(head);
     printLinkedList(head2);
    return 0;
}