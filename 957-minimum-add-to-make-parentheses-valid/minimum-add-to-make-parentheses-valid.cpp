class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        for (auto& val : s) { 
            if (st.empty()) {
                st.push(val); 
            } 
            else if (st.top() == '(' and val == ')') {
                st.pop();
            } 
            else {
                st.push(val); 
            }
        }

        return st.size();
    }
};