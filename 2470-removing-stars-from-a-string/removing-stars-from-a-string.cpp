class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string res="";
        for(int i=0;i<s.size();i++)
        {
                if(s[i]!='*')
                {
                    st.push(s[i]);
                }
                else if(!st.empty()){
                    st.pop();
                }
        }
          while(!st.empty()){
        
          res+=st.top();
          st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};