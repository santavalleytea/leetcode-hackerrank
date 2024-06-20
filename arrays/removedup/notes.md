# Intuition
- The function should return the new length of the array with all unique elements. The relative order of the elements should be maintained.

# Approach
- Initially, if the nums array is empty, return 0.
- Initilize two pointers, i and j, where pointer i tracks the position of the last unique element found and j iterates through the array.
- If the current element nums[j] is different from nums[i], then increment i and update nums[i] with nums[j].

# Complexity
- Time complexity: O(n)
Each element is traversed through once.

- Space complexity: O(1)
Only utilizes pointers i and j.
