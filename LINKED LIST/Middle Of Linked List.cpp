// Middle of the Linked List (LINKED LISTS)
//Given the head of a singly linked list, return the middle node of the linked list.
// If there are two middle nodes, return the second middle node.



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*slowptr=head;
        ListNode*fastptr=head;
        while(fastptr!=NULL && fastptr->next!=NULL)
        {
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        return slowptr;
    }
};


// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.

// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.