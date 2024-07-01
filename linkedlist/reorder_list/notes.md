Problem 143

# Intuition
The idea is to find the middle node first using a two pointer method. Then, reverse the second half of the list, which would result in the 'prev' pointer pointing to the head of the second half of the list. Finally, merge the two list together by taking the nodes alternatively, which would then result in the list required.

# Approach
- Handle the null case.
- Initialize two pointers, one and two.
- Iterate through the linked list to find the middle, this is done by having the 'one' pointer iterate through each node while the 'two' pointer iterating through every other node, resulting in the 'one' pointer pointing to the middle.
- Reverse the second half of the list.
- Alternate between the nodes in first and second list to merge the two lists in the way that is required.

# Complexity
- Time complexity: O(n)
Worst case iterate through all nodes.

- Space complexity: O(1)
Simply setting pointers which takes constant space.
