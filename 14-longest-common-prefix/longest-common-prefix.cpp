class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        int n = strs.size();
        string res = "";
        for (int j = 0; j < strs[0].size(); j++) {
            char c = strs[0][j]; 
            for (int i = 1; i < n; i++) {
                if (strs[i][j] != c) {
                    return res;
                }
            }
            res += c;
        }
        
        return res;
    }
};
