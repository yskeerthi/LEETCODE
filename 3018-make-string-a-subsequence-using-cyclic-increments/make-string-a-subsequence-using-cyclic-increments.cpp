class Solution {
public:
  bool canMakeSubsequence(string str1, string str2) {
    int n = str1.length(), m = str2.length();
    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        char currchar = str1[i];
        char inchar = (currchar - 'a' + 1) % 26 + 'a';

        if (currchar == str2[j] || inchar == str2[j]) {
            j++;
        }
    }

    return j == m;
}
};