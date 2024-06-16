class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        // New array, double the size
        std::vector<int> newNums(size * 2);

        // Iterate and copy to newNums from the start
        for (int i = 0; i < size; ++i) {
            newNums[i] = nums[i];
        }

        // Iterate and copy to newNums from the second half
        int nsize = newNums.size() / 2;
        for (int j = 0; j < size; ++j) {
            newNums[j + nsize] = nums[j];
        }

        return newNums;
    }
};
