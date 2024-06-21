# Intuition
The idea is to iterate through the nums array and keep track of the current max value, which would be either the current index, or the current index plus the current max value. We also update the global max value if the current index is greater, thus giving the largest sum of a subarray.

# Approach
- Initialize max_current and max_global to the 0th index of the nums array.
- Iterate through the nums array. 
- Update the max_current variable to be the largest between nums[i] and nums[i] + max_current.
- Update global max if max_current > max_global.
- Return the max_global variable.

# Complexity
- Time complexity: O(n)
Iterating through the array and processing each element once.

- Space complexity: O(1)
Only initializing two variables, max_current and max_global
