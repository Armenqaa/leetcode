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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *slow {head}, *fast {head};
        if (head == nullptr) {
            return head;
        }
        
        while(fast != nullptr) {
            if (fast -> val != slow -> val) {
                slow = slow -> next;
                slow -> val = fast -> val;
            }
            
            fast = fast -> next;  
        }
        
        slow -> next = nullptr;
        return head;
        
    }
};
