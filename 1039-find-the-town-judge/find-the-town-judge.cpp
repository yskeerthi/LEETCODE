class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, int>trustedBy; 
        unordered_map<int, int>trusts; 
        for(int i = 0; i < trust.size(); ++i) {
            int a = trust[i][0]; 
            int b = trust[i][1];
            trustedBy[b]++;
            trusts[a]++;
        }
        for(int i = 1; i <= n; ++i){
            if(trustedBy[i] == n - 1 && trusts[i] == 0)
                return i;
        }
        return -1;
    }
};
