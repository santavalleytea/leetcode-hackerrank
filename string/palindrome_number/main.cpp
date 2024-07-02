class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);

        std::string reversed = s;
        std::reverse(reversed.begin(), reversed.end());

        return reversed == s;
    }
};
