class Solution {
public:
    bool isValid(std::string s) {
       stack<char> st;
      unordered_map<char, char> matching = {{')', '('}, {']', '['}, {'}', '{'}};
      for(char ch:s)
      {
        if(ch=='(' || ch=='[' || ch=='{')
        {
            st.push(ch);
        }
        else if(ch==']' || ch=='}'|| ch==')')
        {
            if(st.empty() || st.top()!=matching[ch])
            {
                return false;
            }
            st.pop();
        }
      }
      return st.empty();
       
    }
};
