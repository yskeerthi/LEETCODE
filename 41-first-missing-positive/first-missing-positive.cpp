
class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        int n = nums.size();
        
        // Rearrange the elements to their correct positions
        for (int i = 0; i < n; ++i) {
            // Keep swapping until the current number is in its correct position
            // or it's out of the range [1, n]
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                std::swap(nums[i], nums[nums[i] - 1]);
            }
        }
        
        // After rearranging, the first index where the value is not (i + 1)
        // is the missing positive number
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        
        // If all numbers from 1 to n are present, return n + 1
        return n + 1;
    }
};

