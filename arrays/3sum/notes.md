# Intuition
The idea is to intialize two pointers and shift the pointers based on the sum of the computed triplets. In addition, skip any duplicates as required. Return a nested array of triplets, to which all the elements in each triplet equals 0.

# Approach
- Initiliaze a result array which is a nested array.
- Sort the array to facilitate the two pointers and avoid any duplicates.
- Iterate through the given array.
- If i > 0 and nums[i] is equal to nums[i - 1], we have encountered a duplicate and thus continue with the loop.
- Initialize left and right pointers, one on the left most index after i and the other on the right most index.
- While the left is smaller than the right, we sum up the 3 elements. If the sum is 0, append into the results array. 
- We then skip any duplicates for the pointers by checking if nums[left] equals the one on the left of it and if nums[right] is equal to the one on the right of it.
- We then continue with the loop by shifting the left pointer to the right and the right pointer to the left.
- Finally, return the nested result array.

# Complexity
- Time complexity: O(n^2)
Sorting the array takes O(nlogn) time, The outer loop runs O(n) times and the inner while loop also runs O(n) times. Thus the time complexity is O(n^2).

- Space complexity: O(1)
