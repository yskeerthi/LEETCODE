class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int total = 0;
        int mCount = 0, pCount = 0, gCount = 0;
        int lastM = 0, lastP = 0, lastG = 0;

        for (int i = 0; i < n; ++i) {
            for (char c : garbage[i]) {
                if (c == 'M') {
                    mCount++;
                    lastM = i;
                }
                if (c == 'P') {
                    pCount++;
                    lastP = i;
                }
                if (c == 'G') {
                    gCount++;
                    lastG = i;
                }
            }
        }
        vector<int> prefix(n, 0);
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] + travel[i - 1];
        }
        total = mCount + pCount + gCount;
        total += prefix[lastM] + prefix[lastP] + prefix[lastG];

        return total;
    }
};
