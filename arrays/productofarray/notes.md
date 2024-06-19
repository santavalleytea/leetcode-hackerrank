# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The idea is to consider the elements on the left and right hand side of the index we are currently in, take the products of those elements and then combine them to produce one element of all the products.

# Approach
<!-- Describe your approach to solving the problem. -->
- Initialize left, right and result array. Where the left array holds the product of all the elements on the left of the current index, and the right array holds the product of all the elements on the right.
- The first loop will iterate up until the current working index and the second loop will iterate after the current working index until the end of the nums array
- Finally, iterate through the array from index 0 until index n-1 and thus producing the required resulting array.


# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
O(n) due to the utilization of single for loops.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(1)
