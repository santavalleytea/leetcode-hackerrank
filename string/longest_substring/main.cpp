class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> result;
        int left = 0;
        int maxLen = 0;

        for (int i = 0; i < s.length(); ++i) {
            while (result.find(s[i]) != result.end()) {
                result.erase(s[left]);
                ++left;
            }
            result.insert(s[i]);
            maxLen = max(maxLen, i - left + 1);
        }

        return maxLen;

    }
};
