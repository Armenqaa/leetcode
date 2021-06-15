class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while (1) {
            if (slow != NULL && fast != NULL) {
                slow = slow->next; 
                fast = fast->next;
            } else {
                return NULL;
            }
            
            if (fast != NULL) {
                fast = fast->next;
            } else {
                return NULL;
            }
            
            if (fast == slow) {
                slow = head;
                while(slow != fast) {
                    slow = slow -> next;
                    fast = fast -> next;
                }
                return slow;
            }
        }
    }
};
