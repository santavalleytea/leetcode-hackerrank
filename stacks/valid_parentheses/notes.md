Problem 20

# Intuition
The idea is to initialize a stack and push each characters in the string depending on the conditions. Intuitively, we want to look for pairs of brackets, and if this is found, then we simply pop it out of the stack and continue with the iteration of the string. Otherwise, there would be a bracket that either does not have a pair or is not in a valid position.

# Approach
- Initialize an empty stack.
- Iterate through each character in the string.
- If we are dealing with a left bracket of any type, simply push it on to the stack.
- If we are dealing with a right bracket, check to see if the stack is either empty or the top element of the stack is the left bracket of the same type. If the first condition is true or the second condition is false, we return false.
- Otherwise, pop the element and move on to the next character in the string.
- Once the iteration is over, we check to see if the stack is empty. If it is empty, then every bracket has found a valid pair in the correct position, thus returning true, else, return false. 

# Complexity
- Time complexity: O(n)
Process each character in the string once.

- Space complexity: O(n)
Worst case, store every character in the string to the stack.
