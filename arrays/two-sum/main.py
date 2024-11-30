class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # Initialize hash map (num as key, index as value)
        num_index = {}
        # loop through enumerate -> provides num with index
        for i, num in enumerate(nums):
            # find the value to look for
            value = target - num
            # if value in hash map, return its index and i
            if value in num_index:
                return [num_index[value], i]
            num_index[num] = i # add current num and its index to hashmap
