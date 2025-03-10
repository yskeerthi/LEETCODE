class Solution {
public:
    void reverseString(vector<char>& s) {
        string res = "";
        for (int i = s.size() - 1; i >= 0; i--) {   
            res += s[i]; 
        }
        s = vector<char>(res.begin(), res.end());  
    }
};
