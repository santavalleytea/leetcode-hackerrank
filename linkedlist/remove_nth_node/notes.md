Problem 19

# Intuition
The idea is to utilize two pointers where the difference between the two is n nodes. This means that when the first pointer reaches the end, the second pointer will be pointing to the node before the node that needs to be deleted.

# Approach
- Initialize a temp node and add '-1' to the start of the linked list.
- Intitialize both first and second pointers.
- Iterate through the linked list up until n nodes, where the first pointer will point at, which ensures the difference between first and second pointer is now n nodes.
- Iterate through the linked list and shift the pointers until the first pointer reaches the end.
- Rearrange the pointers and delete the second->next node.
- Return the actual head of the list which would be temp.next, excluding the initial dummy node.

# Complexity
- Time complexity: O(n)
Worst case, iterate through all nodes.

- Space complexity: O(1)
Initializing two pointers, which is constant space.
