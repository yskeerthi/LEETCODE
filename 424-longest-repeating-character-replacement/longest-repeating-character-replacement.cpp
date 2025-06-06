class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int maxCount = 0, i = 0, maxLen = 0;

        for (int j = 0; j <s.size(); j++) {
            freq[s[j] - 'A']++;
            maxCount = max(maxCount, freq[s[j] - 'A']);
            while ((j - i + 1) - maxCount > k) {
                freq[s[i] - 'A']--;
                i++;
            }

            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};
