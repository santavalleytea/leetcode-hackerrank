Problem 100

# Intuition
The idea is to recursively call the function to iterate through both the left and right side of the two trees. For each current node we are at for both trees, we check to see if it is equivalent. 

# Approach
- Initialize the base case, where if both p and q are null, then it is equivalent. Otherwise, return false.
- We check if the value for the current nodes for both p and q are equivalent.
- Recursively call the left and the right side of both trees to ensure each node is the same.
- By checking if leftVal and rightVal is the same, it allows to handle null nodes.

# Complexity
- Time complexity: O(n)
Each node is processed once.

- Space complexity: O(n)
In the worst case, we would store all nodes. This can happen in an unbalanced tree.
