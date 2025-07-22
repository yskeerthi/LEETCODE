class Solution{
public:
    unordered_set<string> st;
    bool wordBreak(string s, vector<string>& wordDict){
        int n = s.size();
        vector<int> dp(n+1, 0);
        dp[n] = 1;
        for(string &str : wordDict){
            st.insert(str);
        }
        for(int idx=n-1; idx>=0; idx--){
            for(int l=1; l<=n-idx; l++){
                string temp = s.substr(idx, l);
                if(st.find(temp) != st.end() && dp[idx+l]){
                    dp[idx] = 1;
                    break;
                }
            }
        }
        return dp[0];
    }
};