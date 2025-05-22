class Solution {
public:
    vector<int> getMaximumXor(vector<int>& a, int b) {
        int n = a.size(), x = 0;
        vector<int> res;
        for (int i = 0; i < n; ++i) x ^= a[i];
        int m = (1 << b) - 1;
        for (int i = n - 1; i >= 0; --i) {
            res.push_back(x ^ m);
            x ^= a[i];
        }
        return res;
    }
};
