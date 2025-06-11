class Solution {
public:
    int countBalls(int l, int h) {
        vector<int> b(46, 0);
        for (int i = l; i <= h; i++) {
            int v = i, s = 0;
            while (v) {
                s += v % 10;
                v /= 10;
            }
            b[s]++;
        }
        return *max_element(b.begin(), b.end());
    }
};
