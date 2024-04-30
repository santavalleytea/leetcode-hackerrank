class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Initialize hash map
        std::unordered_map<int, int> map;

        // Iterate through the nums array
        for (int i = 0; i < nums.size(); ++i) {
            int element = target - nums[i];

            // Check for element in the hashmap
            if (map.find(element) != map.end()) {
                return {map[element], i};
            }
            // Store the current element and index into hashmap
            map[nums[i]] = i;
        }
        return {};
    }
};
