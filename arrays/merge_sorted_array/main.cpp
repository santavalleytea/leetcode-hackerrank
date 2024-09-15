class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> array1;
        vector<int> array2;

        for (int i = 0; i < m; ++i) {
            array1.push_back(nums1[i]);
        }

        for (int i = 0; i < n; ++i) {
            array2.push_back(nums2[i]);
        }

        // Insert array2 at end of array1
        array1.insert(array1.end(), array2.begin(), array2.end());
        sort(array1.begin(), array1.end());

        // Replace elements of nums1 with array1
        for (int i = 0; i < m + n; ++i) {
            nums1[i] = array1[i];
        }
    }
};
