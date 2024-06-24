class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        // Count frequency of each character in s and add to count
        for (auto x : s) {
            count[x]++;
        }

        // Count frequency of each character in t and decrease from count
        for (auto x : t) {
            count[x]--; 
        }

        // If any count of character frequency is not 0, then it doesn't match
        // x.first is the character and x.second is the count (key-value pair)
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }

        return true;
    }
};
