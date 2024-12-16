class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // Use stack to store opening brackets
        for (char c : s) { // Iterate over each character
            // Push opening brackets to the stack
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            // Check closing brackets
            else {
                // If stack is empty, it means its a close bracket
                if (st.empty()) return false;
                
                // Check if the top of the stack matches the current closing bracket
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false; // Mismatch
                }
            }
        }
        // If stack is empty, all brackets are matched
        return st.empty();
    }
};
