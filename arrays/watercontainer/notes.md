Problem 11

# Intuition
The idea is to utilize two pointers, left and right, and calculate the area enclosed by the two pointers. We then constantly update the max area.

# Approach
- Initialize left and right pointers, where the left points at the 0th index and the right poiting at the last index.
- Initialize the max_area variable.
- Start a while loop and initialize the width and the area enclosed by the two pointers.
- If the current area is greater than the max area, we update the max area.
- If the height of the bar that the left pointer is pointing to is smaller, then move the left pointer to the right. Otherwise, move the right pointer to the left.
- Return the max area.

# Complexity
- Time complexity: O(n)

- Space complexity: O(1)
