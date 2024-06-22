class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result;

        for (int left = 0; left <= n - k; ++left) {
            int max_val = nums[left];
            for (int right = left; right < left + k; ++right) {
                max_val = max(max_val, nums[right]);
            }
            result.push_back(max_val);
        }

        return result;
    }
};
