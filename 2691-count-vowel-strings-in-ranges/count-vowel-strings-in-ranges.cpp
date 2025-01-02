class Solution {
public:
    bool vowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n, 0);
        
        // Build the prefix array
        for (int i = 0; i < n; ++i) {
            // Check if the word starts and ends with a vowel
            if (vowel(words[i][0]) && vowel(words[i].back())) {
                prefix[i] = (i == 0) ? 1 : prefix[i - 1] + 1;
            } else {
                prefix[i] = (i == 0) ? 0 : prefix[i - 1];
            }
        }
        
        // Answer each query using the prefix array
        vector<int> result;
        for (const auto& query : queries) {
            int l = query[0], r = query[1];
            if (l == 0) {
                result.push_back(prefix[r]);
            } else {
                result.push_back(prefix[r] - prefix[l - 1]);
            }
        }
        
        return result;
    }
};
