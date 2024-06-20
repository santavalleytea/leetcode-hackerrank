# Intuition
The idea is to utilize a stack and for each given condition, use pop(), push() or top() to meet the requirements.

# Approach
- Initialize an empty stack.
- Iterate through the given array and for each element, execute the operation.
- If the operation is "C", simply pop the element from the top of the stack.
- If the operation is "D", push a new element that is doubled the element at the top of the stack
- If the operation is "+", initialize a variable that stores the top most element, pop both the two elements at the top, add it together then push it back into the stack.
- Otherwise, we push the element (convert from string to int) onto the stack.
- Finally, sum up all the elements in the stack.

# Complexity
- Time complexity: O(n)
Each stack operation runs in O(1) time and the for loop, and the while loop are each O(n) time. Hence, O(n) + O(n) = O(n).

- Space complexity: O(n)
The stack can hold up to n elements and the other variables present consumes O(1) space.
