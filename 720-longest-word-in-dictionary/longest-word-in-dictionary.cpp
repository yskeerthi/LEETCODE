class Solution {
public:
    string longestWord(vector<string>& words) {
        string result = "";
        for (const string& word : words) {
            bool canBuild = true;
            for (int i = 1; i < word.length(); ++i) {
                string prefix = word.substr(0, i);
                if (find(words.begin(), words.end(), prefix) == words.end()) {
                    canBuild = false;
                    break;
                }
            }
            if (canBuild) {
                if (word.length() > result.length() || 
                   (word.length() == result.length() && word < result)) {
                    result = word;
                }
            }
        }

        return result;
    }
};
