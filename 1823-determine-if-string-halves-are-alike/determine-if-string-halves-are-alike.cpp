class Solution {
public:
    bool halvesAreAlike(string s) {
        int c = 0;  // Count for first half
        int k = 0;  // Count for second half
        
        // Loop for the first half
        for(int i = 0; i < s.size() / 2; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                c++;
            }
        }
        
        // Loop for the second half
        for(int i = s.size() / 2; i < s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                k++;
            }
        }
        
        return c == k;  // Return true if counts are equal, false otherwise
    }
};
