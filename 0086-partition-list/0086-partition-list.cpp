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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummyList = new ListNode(0);
        ListNode* dummyList2 = new ListNode(0);
        ListNode* curr = dummyList;
        ListNode* temp = dummyList2;

        ListNode* mop = head;
        while(mop != NULL){
            if(mop->val < x){
                curr->next = mop;
                curr = curr->next;
            }
            else{
                temp->next = mop;
                temp = temp->next;
            }

            mop = mop->next;
        }

        temp->next = NULL;
        curr->next = dummyList2->next;
        return dummyList->next;
    }
};