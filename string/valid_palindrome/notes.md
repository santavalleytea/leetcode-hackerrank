Problem 125

# Intuition
The idea is to initialize a new string called result and for each character in the given string s, if its an alphanumeric character, then append to the result string after making it lowercase. Then simply reverse the result string and check if it is equal to the initial result string.

# Approach
- Initialize result string.
- Iterate through each character in the given string s.
- If it is a alphanumeric character, then make it lower case and add into the result string.
- Initialize another string called reversed, which is essentially another copy of the result string.
- Reverse it and then check if result is equal to the reversed string.

# Complexity
- Time complexity: O(n)
We only iterate and process each character of the string once.

- Space complexity: O(n)
Since the newly initialized string contains the number of characters in s. The worst case is if all the characters in string s is an alphanumeric character.
