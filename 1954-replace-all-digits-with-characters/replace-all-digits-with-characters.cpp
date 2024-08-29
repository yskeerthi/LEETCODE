class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1; i < s.size(); i += 2) { 
            if(isdigit(s[i])) {
                int x = s[i] - '0';  
                s[i] = s[i-1] + x;  
            }
        }
        return s; 
    }
};
