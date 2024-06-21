class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        int max_current = nums[0];
        int max_global = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            // Update max_current to be the max between nums or nums in addition to max_current
            max_current = max(nums[i], max_current + nums[i]);

            // Update global max
            if (max_current > max_global) {
                max_global = max_current;
            }
        }

        return max_global;
    }
};
