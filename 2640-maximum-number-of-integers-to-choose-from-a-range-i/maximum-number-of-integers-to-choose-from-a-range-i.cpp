class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum, int res = 0) {
        unordered_set<int> banned_set(banned.begin(), banned.end());
        for (int i = 1, sum = 0; i <= n; i++) {
            if (banned_set.count(i)) continue;
            sum += i;
            if (sum <= maxSum) res++; else break;
        }
        return res;
    }
    
};