Problem 226

# Intuition
The idea of this is to swap the left and right children of all nodes in the tree, thus 'inverting' the tree. 

# Approach
- Start with the base case where, if root is equal to null, it returns the root.
- Recursively call the function for the left and right child of the current node, which will continue until they reach the base case.
- Then, switch the left and right children of the current node.
- Return the root of the subtree which is now inverted.

# Complexity
- Time complexity: O(n)
The function visits each node at most once.

- Space complexity: O(n)
For a completely unbalanced tree, the height of the tree is n.
