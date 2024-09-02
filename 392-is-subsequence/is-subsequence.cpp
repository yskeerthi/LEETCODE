class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // Pointer for string s
        int j = 0; // Pointer for string t

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++; // Move to the next character in s
            }
            j++; // Always move to the next character in t
        }

        // If we've matched all characters in s, return true
        return i == s.size();
    }
};
