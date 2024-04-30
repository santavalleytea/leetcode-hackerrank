# Intuition
- The idea here is to use a hashmap to check if the complement of each element exists among the elements already processed. If it does,
return the indices of these two elements.

# Approach
- Iterate through the array and find the complement required to meet the target for each element.
- If the complement is in the map, return the indices of the complement and the current element.
- Otherwise, store the value in the hashmap.

# Time Complexity: O(n)
- Traversing list of n elements once and hash map look up is constant time.

# Space Complexity: O(n)
- Space depends on the number of items stored in the hash map.
