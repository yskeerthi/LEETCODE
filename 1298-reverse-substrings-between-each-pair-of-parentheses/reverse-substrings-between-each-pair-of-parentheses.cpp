class Solution {
public:
    string reverseParentheses(std::string s) {
        int n = s.length();
       stack<int> opened;
        unordered_map<int, int> pair;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(') {
                opened.push(i);
            } else if (s[i] == ')') {
                int j = opened.top();
                opened.pop();
                pair[i] = j;
                pair[j] = i;
            }
        }
       string res="";
        int i = 0;
        int direction = 1; 

        while (i < n) {
            if (s[i] == '(' || s[i] == ')') {
                i = pair[i];
                direction = -direction;
            } else {
                res.push_back(s[i]);
            }
            i += direction;
        }

        return res;
    }
};