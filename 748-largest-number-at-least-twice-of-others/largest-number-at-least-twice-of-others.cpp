class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> res = nums;
        sort(res.begin(), res.end());

        if (res[n - 1] >= 2 * res[n - 2]) {
            int maxVal = res[n - 1];
            for (int i = 0; i < n; i++) {
                if (nums[i] == maxVal) return i;
            }
        }

        return -1;
    }
};
