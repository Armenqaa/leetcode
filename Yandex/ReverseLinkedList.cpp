class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return head;
        }
        
        ListNode *main_h = head;
        
        while (main_h -> next != NULL) {
            ListNode *main_h_next = main_h -> next;
            main_h -> next = main_h -> next -> next;
            ListNode *h_cpy = head;
            head = main_h_next;
            head -> next = h_cpy;
        }
        
        return head;
        
    }
};
