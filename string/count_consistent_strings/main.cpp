class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        std::unordered_set<char> allowedSet(allowed.begin(), allowed.end());
        
        for (const std::string& word : words) {
            bool isConsistent = true;

            // Check every character in word is in the allowed set
            for (char c : word) {
                // If character c not in set
                if (allowedSet.find(c) == allowedSet.end()) {
                    isConsistent = false;
                    break;
                }
            }

            if (isConsistent) {
                count++;
            }
        }

        return count;

    }
};
