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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode temp(-1);
        temp.next = head;
        ListNode* first = &temp;
        ListNode* second = &temp;

        // Ensure gap between first and second pointer is n nodes
        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }

        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        ListNode* toDelete = second->next;
        second->next = second->next->next;

        return temp.next;
    }
};
