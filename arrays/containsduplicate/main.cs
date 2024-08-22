public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        int count = 0;
        Dictionary<int, int> map = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; ++i) {
            if (map.ContainsKey(nums[i])) {
                return true;
            } else {
                map.Add(nums[i], count + 1);
            }
        }

        return false;
    }
}
