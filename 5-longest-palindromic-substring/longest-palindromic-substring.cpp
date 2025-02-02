class Solution {
public:
    string pal(string& s, int l, int r) {
        while (l >= 0 && r < s.size()+1&& s[l] == s[r]) {
            l--;
            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            string odd = pal(s, i, i);   
            string even = pal(s, i, i + 1);

            if (odd.size() > res.size()) res = odd;
            if (even.size() > res.size()) res = even;
        }
        return res;
    }
};
