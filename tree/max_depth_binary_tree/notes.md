# Intuition
The idea is to recursively iterate through both the left and right side of the tree and take the maximum depth. Add 1 to the depth variable to include the root.

# Approach
- Check if the root is null, if so return 0 there is no depth.
- Iterate through both the left and right side of the tree.
- Store the maximum depth between the two in the depth variable.
- Return 1 plus the depth to include the root.

# Complexity
- Time complexity: O(n)
Since we need to iterate through each node to determine the max depth of the tree.

- Space complexity: O(n)
Since the worst case requires to store each and every node, especially in a skewed tree.
