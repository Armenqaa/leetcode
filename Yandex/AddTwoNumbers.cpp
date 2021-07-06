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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *res_head = new ListNode(), *curr = res_head;
        while (l1 != NULL || l2 != NULL) {
            int sum;  
            if (l1 == NULL) {
                sum = l2 -> val + carry;
                carry = sum / 10;
                l2 = l2 -> next;
            } else if (l2 == NULL) {
                sum = l1 -> val + carry;
                carry = sum / 10;
                l1 = l1 -> next;
            } else {
                sum = l1 -> val + l2 -> val + carry;
                carry = sum / 10;
                l1 = l1 -> next;
                l2 = l2 -> next;
            }
            curr -> val = sum % 10;
            if (l1 != NULL || l2 != NULL) {
                curr -> next = new ListNode();
                curr = curr -> next;
            }
        }
        
        if (carry != 0) {
            curr -> next = new ListNode(carry);
        }
        
        return res_head;
    }
};
