class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxFreqSum(string s) {
        unordered_map<char, int> vowels;
        unordered_map<char, int> consonants;

        for (char ch : s) {
            if (isVowel(ch)) {
                vowels[ch]++;
            } else {
                consonants[ch]++;
            }
        }

        int maxFreq1 = 0,maxFreq2=0;
        for (auto& it : vowels) {
            maxFreq1 = max(maxFreq1, it.second);
        }
        for (auto& it : consonants) {
            maxFreq2 = max(maxFreq2, it.second);
        }

        return maxFreq1+maxFreq2;
    }
};
