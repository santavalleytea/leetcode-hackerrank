Problem 33

# Intuition
The idea is to utilize two pointers, identify the current middle index between the left and right pointers and shift the pointers depending on the conditions. The pointers should then converge and thus pointing to the target value.

# Approach
- Initialize left pointer pointing at the 0th index and the left pointer pointing to the last index.
- While the element that the left pointer is pointing at is smaller or equal to the right, we initialize the mid index.
- If the mid index is the target, we return that index.
- If the left pointer is smaller or equal to the mid, then we shift the pointers depending on the condition.
- If the left pointer is smaller than or equal to the target and the target is smaller than the value in the middle, we can deduce that the target is on the left hand side, and thus shift the right pointer to the left of the mid index. Otherwise, shift the left pointer to the right of the mid index.
- On the other hand, if the mid element is smaller than the target and the target is smaller than or equal to the element pointed by the right pointer, this indicates that the right side must be sorted, and so we shift the left pointer to the right of the mid index.
- Otherwise, shift the right pointer to the left of the mid index.
- If the target is then not found, return -1.

# Complexity
- Time complexity: O(log n)
Do not necessarily iterate through all the elements in the array. We narrow down the potential elements for every iteration. This is essentially a form of binary search.

- Space complexity: O(1)
Simply initializing two pointers which take up O(1) extra space each.
