class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        val = set()
        for num in nums:
            if num in val:
                return True
            else:
                val.add(num)
        
        return False
