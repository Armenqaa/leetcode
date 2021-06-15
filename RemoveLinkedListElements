class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return head;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (slow -> val == val && slow -> next != NULL) { 
            slow = slow -> next;
        }
        
        if (slow -> next == NULL && slow -> val == val) {
            return NULL;
        }
        
        fast = slow;
        ListNode *head_cpy = slow;
        
        while (fast -> next != NULL) {
            if (fast -> next -> val != val) {
                slow -> next = fast -> next;
                slow = slow -> next;
            }
            
            fast = fast -> next;
        }
        
        slow -> next = NULL;
        return head_cpy;
    }
};
