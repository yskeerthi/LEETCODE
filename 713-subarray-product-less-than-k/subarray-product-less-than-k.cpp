class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0; 

        int count = 0;
        int n = nums.size();
        for (int start = 0; start < n; ++start) {
            int product = 1;
            for (int end = start; end < n; ++end) {
                product *= nums[end];
                if (product < k)
                    count++;
                else
                    break; 
            }
        }
        return count;
    }
};
