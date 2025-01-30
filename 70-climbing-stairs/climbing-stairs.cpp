class Solution {
public:
    vector<int> v;

    int climbStairs(int n) {
        if (v.empty()) {
            v.resize(46, 0);
        }

        if (n < 0) return 0;
        if (n > 45) return 0;
        if (n == 0) return 1;

        if (v[n] != 0) {
            return v[n];
        }

        v[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return v[n];
    }
};
