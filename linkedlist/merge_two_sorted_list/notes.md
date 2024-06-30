Problem 21

# Intuition
The idea is to start from the head of both lists and compare its values. Depending on the condition, recursively call the function where either list1 or list2's pointer is moved to the next node. Each recursive call effectively adds the smaller of the current nodes to the merged list, and does so until one of the lists is empty.

# Approach
- Construct the two base cases; if list1 is empty, return list2 and vice versa.
- Starting from the head nodes, check which of the two values are smaller (or equal).
- If the value of list1 is smaller (or equal), list1 should come first in the merged list. Set the next pointer of the current list1 node to the result of the recursive call.
- Conversely, if the value of list2 is smaller, then do the same but for list 2.

# Complexity
- Time complexity: O(n + m)
Worst case, process all elements in both list1 and list2.

- Space complexity: O(n + m)
Each recursive call consumes stack space, thus the worst case would be if required to store every element from both list1 and list2.
