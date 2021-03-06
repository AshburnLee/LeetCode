#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};

class Solution{
public:
    int getDecimalValue(ListNode* head){
        int res=0;
        while(head){
            res = res | head->val;
            res <<= 1;
            head = head->next;
        }
        res >>= 1;
        return res;
    }
};
