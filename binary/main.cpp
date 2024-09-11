class Solution {
public:
    int minBitFlips(int start, int goal) {
        // XOR operation; compare start and goal value mismatch
        int result = start ^ goal;
        int count = 0;

        // Gets the binary representation of the result
        std::bitset<8> binary(result);

        while (result > 0) {
            count += result & 1;
            // Shifts the 1 to the right
            result >>= 1;
        }

        return count;
    }
};
