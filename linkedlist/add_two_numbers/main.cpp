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
        // Initialize dummy node
        ListNode* dummy = new ListNode(0);
        // Initialize pointer
        ListNode* current = dummy;
        // Carry value
        int val = 0;

        // Loop while either list has more nodes or if there is a carry value that needs to be added
        while (l1 != nullptr || l2 != nullptr || val != 0) {
            int sum = val;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Compute new carry and attach to result
            val = sum / 10;
            int digit = sum % 10;

            // Create new node with the new digit
            current->next = new ListNode(digit);
            current = current->next;
        }

        // First node is dummy, so return the ones after
        return dummy->next;
    }
};
