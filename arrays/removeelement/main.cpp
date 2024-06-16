class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // std::remove shifts all val elemet to the back, with a new logical end
        // nums.erase() removes all the elements starting from the new logical end
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());

        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            count++;
        }

        return count;
    }
};
