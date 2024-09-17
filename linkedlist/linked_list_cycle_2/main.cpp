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
        unordered_set<ListNode*> map;
        ListNode* current = head;
        int count = 0;

        while (current != nullptr) {
            if (map.find(current) != map.end()) {
                return current;
            }

            map.insert(current);
            current = current->next;
        }

        return nullptr;
    }
};
