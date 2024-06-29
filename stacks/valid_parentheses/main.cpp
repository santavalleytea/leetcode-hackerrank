class Solution {
public:
    bool isValid(string s) {
        stack<char> val;

        for (char c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[':
                    val.push(c);
                    break;
                case ')':
                    if (val.empty() || val.top() != '(') {
                        return false;
                    }
                    val.pop();
                    break;
                case '}':
                    if (val.empty() || val.top() != '{') {
                        return false;
                    }
                    val.pop();
                    break;
                case ']':
                    if (val.empty() || val.top() != '[') {
                        return false;
                    }
                    val.pop();
                    break;
                }
            }

            return val.empty();
        }
    };
