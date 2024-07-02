class Solution {
public:
    bool isPalindrome(int x) {
        std::string result;
        std::string s = std::to_string(x);
        
        for (char c : s) {
            result += c;
        }

        std::string reversed = result;
        std::reverse(reversed.begin(), reversed.end());

        return reversed == result;
    }
};
