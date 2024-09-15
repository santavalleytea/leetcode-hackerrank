class Solution {
public:
    int lengthOfLastWord(string s) {
        string word;
        std::istringstream stream(s);

        // Puts each split string into the word variable 
        // When while loop ends, the word variable will hold the last string in stream
        while (stream >> word) {

        }

        return word.size();
    }
};
