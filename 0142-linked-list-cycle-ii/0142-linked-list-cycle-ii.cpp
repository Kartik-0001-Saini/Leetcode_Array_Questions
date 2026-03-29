/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // we are doing this problem by slow and fast pointer
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            // checking cycle present or not
            if(slow == fast){
                isCycle = true;
                break;
            }
        }
        // return null if cycle is not there
        if(!isCycle){
            return NULL;
        }

        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};