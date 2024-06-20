# Intuition
The idea is to create a new array that is double the size of the original array, and copy the elements over twice; one to the left half and the other to the right half of the array.

# Approach
- Store the size of the nums array
- Initiliaze an array that is double the size of the original array and call it newNums
- Iterate through the original array and copy it over to the new array
- Iterate throught the original array and copy it over to the new array but starting from the half way mark, that is newNums.size() / 2.

# Complexity
- Time complexity: O(n)
The time complexity is O(n) since we iterate through the entire original array

- Space complexity: O(n)
Since the initialized array takes up at most n elements.
