#ifndef _109CONVERTLINKEDLIST2BST
#define _109CONVERTLINKEDLIST2BST

#include "../util/Tree.h"
#include "../util/LinkedList.h"
#include <vector>

/// time: O(N)
/// space:  O(logN)
using namespace std;
class Solution{
private:
	int listSize(ListNode* head){
		ListNode* curr = head;
		int size = 0;
		while (curr){
			curr = curr->next;
			size++;
		}
		return size;
	}

	TreeNode* convertList2BST(ListNode* &head, int l, int r){
		if (l>r) return nullptr;

		int m = l + (r-l)/2;

		TreeNode* left = convertList2BST(head, l, m-1);

		TreeNode* node = new TreeNode(head->val);
		node->left = left;
		head = head->next;

		TreeNode* right = convertList2BST(head, m+1, r);
		node->right = right;
		return node;
	}

public:
	TreeNode* sortedListToBST(ListNode* head){
		int size = listSize(head);

		return convertList2BST(head, 0, size-1);
	}
};

#endif
