class Solution {
public:
    bool isValid(std::string s) {
       stack<char> st;
        vector<char> close = {')', ']', '}'};
      unordered_map<char, char> matching = {{')', '('}, {']', '['}, {'}', '{'}};
        
        for (int i = 0; i < s.size(); i++) {
            if (find(close.begin(), close.end(), s[i]) != close.end()) {
                if (st.empty() || st.top() != matching[s[i]]) {
                    return false;
                }
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};
