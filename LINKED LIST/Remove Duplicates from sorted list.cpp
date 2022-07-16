// Remove Duplicates from Sorted List

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // if linked list is empty
        if(head==NULL)
        {
            return NULL;
        }
       
        ListNode* curr = head;               // we'll keep moving curr till it reaches end
        while(curr!=NULL)
        {
            if((curr->next!=NULL) && curr->val==curr->next->val)        // means we have to delete curr->next as its same to curr
            {
                ListNode*nodeAfterCurrNext = curr->next->next;
                ListNode*nodeToDelete = curr->next;
                curr->next = nodeAfterCurrNext;
                delete nodeToDelete;
            }
            else{
                 curr = curr->next;
            }
        }
        return head;
    }
};


// Input: head = [1,1,2]
// Output: [1,2]

// Input: head = [1,1,2,3,3]
// Output: [1,2,3]