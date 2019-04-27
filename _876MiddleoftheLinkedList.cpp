//
// Created by junhui on 28/04/19.
//

#include <iostream>
#include "LinkedListUtil.h"
using namespace std;

class Solution {
public:
    // time: O(N)   100.00%
    // space: O(1)    22.49%
    ListNode* middleNode(ListNode* head) {
        ListNode* dhead = new ListNode(0);
        dhead->next = head;

        int length = 0;
        for (ListNode* cur = dhead->next; cur!= nullptr; cur=cur->next){
            length++;
        }

        int target = length/2+1;

        for (ListNode* cur = dhead->next; cur!=nullptr; cur=cur->next){
            target--;
            if (target == 0)
                return cur;
        }
        throw invalid_argument("No solution found!");
    }

    // time: O(N)  100.00%
    // space: O(1)  22.49%
    ListNode* middleNode2(ListNode* head){
        ListNode* speed1 = head;
        ListNode* speed2 = head;
        while(speed2 && speed2->next){
            speed1 = speed1->next;
            speed2 = speed2->next->next;
        }
        return speed1;
    }
};

int main(int argc, char** argv){
    LinkedListUtil ll;

    int arr[6] = {1,2,3,4,5,6};
    ListNode* tmp;
    tmp = ll.createListList(arr, 6);
    ll.printList(tmp);

    ListNode* res = Solution().middleNode2(tmp);
    cout<<res->val<<endl;

    return 0;
}