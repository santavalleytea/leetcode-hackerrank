Problem 242

# Intuition
The idea is to create a hash map to store each characters and its count for both string s and t. If the character frequency does not match, then return false, otherwise it returns true.

# Approach
- Initialize an unordered map with key value pairs character and count.
- Iterate through the string s and count the frequency of each character, then add to count.
- Iterate through the string t and count the frequency of each character, then decrease from count.
- Iterate over each element x in the count map, and if the count is 0, return true. Otherwise, return false.

# Complexity
- Time complexity: O(n)
Since we iterate through the length of string which would be n.

- Space complexity: O(1)
Since the number of unique characters is a constant and does not grow with the size of the input strings.
