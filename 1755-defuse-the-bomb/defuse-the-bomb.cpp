class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        if (k == 0) return res;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= abs(k); j++) {
                if (k > 0) res[i] += code[(i + j) % n];
                else res[i] += code[(i - j + n) % n];
            }
        }
        return res;
    }
};