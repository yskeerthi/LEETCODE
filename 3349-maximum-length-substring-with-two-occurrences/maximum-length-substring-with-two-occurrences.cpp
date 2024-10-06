
class Solution {
public:
    int maximumLengthSubstring(const string& s) {
        unordered_map<char, int> charCount;
        int left = 0, maxLength = 0;

        for (int right = 0; right < s.size(); right++) {
            charCount[s[right]]++;
            while (charCount[s[right]] > 2) {
                charCount[s[left]]--;
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};