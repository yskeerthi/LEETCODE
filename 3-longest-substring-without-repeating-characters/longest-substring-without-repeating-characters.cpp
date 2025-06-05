class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int i = 0, j = 0, maxLen = 0;

        while (j < s.length()) {
            if (window.find(s[j]) == window.end()) {
                window.insert(s[j]);
                maxLen = max(maxLen, j - i + 1);
                j++;
            } else {
                window.erase(s[i]);
                i++;
            }
        }

        return maxLen;
    }
};
