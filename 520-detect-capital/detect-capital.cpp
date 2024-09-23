class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperCount = 0;
        for (int i = 0; i < word.size(); i++) {
            if (isupper(word[i])) {
                upperCount++;
            }
        }
        if (upperCount == word.size() || upperCount==0) {
            return true;
        }
        if (upperCount == 1 && isupper(word[0])) {
            return true;
        }

        return false;
    }
};
