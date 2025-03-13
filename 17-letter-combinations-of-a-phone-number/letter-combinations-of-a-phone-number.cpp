class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        unordered_map<char, string> mp {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        
        vector<string> res;
        string current;
        backtrack(0, digits, current, mp, res);
        return res;
    }
    
private:
    void backtrack(int index, string& digits, string& current, 
                  unordered_map<char, string>& mp, vector<string>& res) {
    
        if (current.length() == digits.length()) {
            res.push_back(current);
            return;
        }
        char digit = digits[index];
        string letters = mp[digit];
        for (char letter : letters) {
            current.push_back(letter);
            backtrack(index + 1, digits, current, mp, res);
            current.pop_back(); 
        }
    }
};