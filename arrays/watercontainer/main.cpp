class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int max_area = 0;

        while (left < right) {
            int width = right - left;
            int current_area = min(height[left], height[right]) * width;
            max_area = max(max_area, current_area);

            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return max_area;

    }
};
