class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        int totalSub = 1 << n;
        for (int k = 0; k < totalSub; ++k) {
            int x = 0;
            for (int i = 0; i < n; ++i) {
                if (k & (1 << i)) {
                    x ^= nums[i];
                }
            }
            total += x;
        }

        return total;
    }
};
