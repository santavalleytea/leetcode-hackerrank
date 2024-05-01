# Intuition
- Iterate through string to find the target character d. If found, take the index and reverse the substring until the target character (inclusive).

# Approach
- For loop to iterate through the string
- If word[i] == ch, then reverse the substring, which would be all characters up until the point where ch is present + 1.
- Break out of the for loop when target is found, and return the word where the substring is reversed.

# Complexity
- Time complexity: O(n)

- Space complexity: O(1)
