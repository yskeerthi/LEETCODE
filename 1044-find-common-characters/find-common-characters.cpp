class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        for (char c : words[0]) {
            bool isCommon = true;
            for (int i = 1; i < words.size(); i++) {
                size_t found = words[i].find(c);
                if (found == string::npos) {
                    isCommon = false;
                    break;
                } else {
                    words[i].erase(found, 1);
                }
            }
            if (isCommon) {
                result.push_back(string(1, c));
            }
        }
        return result;
    }
};
