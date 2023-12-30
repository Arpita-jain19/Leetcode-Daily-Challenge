// Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

// The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.
class Solution {
public:
    int maxScore(const std::string& s) {
        int max_score = 0;
        int count_zeros_left = 0;
        int count_ones_right = std::count(s.begin(), s.end(), '1');

        for (int i = 0; i < s.size() - 1; ++i) {
            count_zeros_left += (s[i] == '0');
            count_ones_right -= (s[i] == '1');
            max_score = std::max(max_score, count_zeros_left + count_ones_right);
        }

        return max_score;
    }
};