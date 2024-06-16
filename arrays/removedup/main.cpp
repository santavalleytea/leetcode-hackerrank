class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Empty check
        if (nums.empty()) {
            return 0;
        }

        // Pointing to new array
        int i = 0;
        for (int j = 0; j < nums.size(); ++j) {
            // Checks if element is unique or not
            if (nums[j] != nums[i]) {
                ++i;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
