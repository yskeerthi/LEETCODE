class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<char> uniqueChars(s.begin(), s.end());
        int res = 0;
        vector<int> first(26, -1), last(26, -1);

        for (int i = 0; i < s.length(); i++) {
            if (first[s[i] - 'a'] == -1) {
                first[s[i] - 'a'] = i;
            }
            last[s[i] - 'a'] = i; 
        }

        for (auto c : uniqueChars) {
            int fIdx = first[c - 'a'];
            int lIdx = last[c - 'a'];
            set<char> midChars;
            for (int i = fIdx + 1; i < lIdx; i++) {
                midChars.insert(s[i]);
            }
            res += midChars.size();
        }
        
        return res;
    }
};
