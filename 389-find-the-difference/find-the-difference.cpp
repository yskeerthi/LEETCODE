class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;  // This will hold the extra character
        for (int i = 0; i < t.size(); i++) {
            res ^= t[i];  // XOR all characters in t
        }
        for (int i = 0; i < s.size(); i++) {
            res ^= s[i];  // XOR all characters in s
        }
        return res;  // The result will be the extra character
    }
};
