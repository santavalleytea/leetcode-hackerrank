Problem 141

# Intuition
Two solutions. One simply traverses through the linked list and inserts the node into an empty set. If the node in the set is found through the iteration again, there is a cycle. Another method is to utilize two pointers where one of the pointers iterates through the linked list as intended, but the other iterates through every other node. If these two pointers meet, this means that there is a cycle. The below description will only go through method 2.

# Approach
- Base check for if the node is empty.
- Initialize two pointers; one at the head and one next to the head.
- While the two pointers are not pointing at the same node, if both the node that 'two' is pointing at or the next one is not null, we return false. Since if 'two' is null, then we have reached the end, is two->next is null, then there is no node after the current node pointed by this pointer, meaning we have also reached the end.
- Continuously update the pointers where 'one' goes to the next, and 'two' goes to the one after next.
- Return true if the while loop is finished without having returned false since this would signify that the two pointers have met. 

# Complexity
- Time complexity: O(n)
Worst case having to iterate through every single node.

- Space complexity: O(1)
Only two pointers initialized.
