Problem 3

# Intuition
The idea is to utilize a sliding window technique. This manages a range of elements and check for unique characters. 

# Approach
- Initialize an unordered set, a left pointer and the max length variable.
- Iterate through the string s. 
- If we find the character we are currently at in the result set, then increment the left pointer until we find a character that can be added to the set, which avoids duplicates.
- Otherwise, insert the character to the result set.
- Update maxLen to the largest between the current value or the length of the current window.

# Complexity
- Time complexity: O(n)
Where n is the length of the string and each character is processed at most twice.

- Space complexity: O(min(n, m))
Where n is the length of the string and m is the size of the set.
