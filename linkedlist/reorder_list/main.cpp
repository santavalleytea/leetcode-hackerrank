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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            return;
        }

        ListNode* one = head;
        ListNode* two = head;

        // Finding the middle node
        while (two->next && two->next->next) {
            one = one->next;
            two = two->next->next;
        }

        ListNode* current = one->next;
        ListNode*prev = nullptr;

        // Reverse second half of list
        while (current != nullptr) {
            ListNode* temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        one->next = nullptr;

        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};
