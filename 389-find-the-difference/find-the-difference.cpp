class Solution {
public:
   char findTheDifference(string s, string t) {
    for (char ch : t) {
        int countInS = count(s.begin(), s.end(), ch);
        int countInT = count(t.begin(), t.end(), ch);
        if (countInT > countInS) {
            return ch;
        }
    }
    return ' ';
}

    
};