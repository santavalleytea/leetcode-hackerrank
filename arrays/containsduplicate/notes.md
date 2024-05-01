# Intuition
- Iterate through the array of numbers and store it in a hash table. If there exist any duplicate values, return true. Otherwise, store that element in the hash table and continue iterating.

# Approach
- Initialize an unordered_set (hash table) which stores each elements in the array.
- Iterate through the given array .
- For each element in the iteration:
    - If that same element already exists in the hash table, return  true.
    - Else, add the element into the hash table and continue iterating. 
- If the loop completes without returning true, return false.

# Complexity
- Time complexity: O(n) - iterating through n elements. Insert and find are O(1). 
 
- Space complexity: O(n) - when there are no duplicates
