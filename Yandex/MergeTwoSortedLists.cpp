class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *res = l1;
        if (l1 == NULL) {
            return l2;
        } 
        
        if (l2 == NULL) {
            return l1;
        }
    
        while (l2 != NULL && l1 != NULL) {
            if (l1 -> val <= l2 -> val) {
                l1 = l1 -> next;
            } else {
                ListNode *cpy = l1;
                l1 -> next = l2;
                l1 = l1 -> next;
                l1 -> next = cpy;
                l2 = l2 -> next;
            }
        }
        
        return res;
    
    }
};
