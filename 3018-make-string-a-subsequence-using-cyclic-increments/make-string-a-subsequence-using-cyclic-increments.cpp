class Solution {
public:
   bool canMakeSubsequence(string str1, string str2) {
    int n = str1.length(), m = str2.length();
    if (m > n) return false;

    vector<int> asciiStr1, asciiStr2;
    for (char c : str1) {
        asciiStr1.push_back(c);
    }
    for (char c : str2) {
        asciiStr2.push_back(c);
    }

    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        if (asciiStr1[i] == asciiStr2[j] || (asciiStr1[i] + 1 - 'a') % 26 + 'a' == asciiStr2[j]) {
            j++;
        }
    }

    return j == m;
}
};