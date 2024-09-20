class Solution {
public:
    vector<int> countBits(int n) {
        if (n < 0) {
            return {}; 
        }

        vector<int> ans(n + 1); 
   
        for (int i = 0; i <= n; ++i) {
            ans[i] = __builtin_popcount(i); 
        }

        return ans; 
    }
};
