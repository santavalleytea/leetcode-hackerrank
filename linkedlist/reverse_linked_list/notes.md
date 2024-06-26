Problem 206

# Intuition
The idea here is to rearranged the pointer to the next node to point to the previous node, thus "reversing" the linked list. We initialize the prev, current and next pointer as to not break the link between the nodes.

# Approach
- Initialize three pointers; current = head, prev and next = null.
- While current, which is pointing to the head is not null, we set the next to be the next of the current node.
- We reverse the pointer of current->next to the node previous to the current.
- Set prev to be current and current to be next, so we continue iterating through the linked list.
- Return the prev variable which should now be the head of the linked list.

# Complexity
- Time complexity: O(n)
We iterate through each node at most once.

- Space complexity: O(1)
Pointers do not change in size, thus being constant.
