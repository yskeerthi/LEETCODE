#include <string>
#include <cctype> 
#include <algorithm> 

class Solution {
public:
    bool isPalindrome(std::string s) {
       string str = "";
        
        for (char c : s) {
            if (isalnum(c)) {
                str += tolower(c);
            }
        }

    string reversedStr = str;
     reverse(reversedStr.begin(), reversedStr.end());

        return str == reversedStr;
    }
};
