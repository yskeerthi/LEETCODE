class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xv = start ^ goal;
   
    return __builtin_popcount(xv);
    }
};