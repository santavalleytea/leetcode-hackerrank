class Solution {
public:
    bool isPalindrome(string s) {
        std::string result; 
        for (char c : s) {
            if (std::isalnum(c)) {
                result += std::tolower(c);
            }
        }

        std::string reversed = result;
        std::reverse(reversed.begin(), reversed.end());

        return result == reversed;

    }
};
