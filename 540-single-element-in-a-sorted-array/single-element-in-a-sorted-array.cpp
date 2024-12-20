class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            // Ensure 'mid' is even for pair comparison
            if (mid % 2 == 1) {
                mid--;
            }
            // Compare with the next element
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2; // Move right
            } else {
                right = mid; // Move left
            }
        }
        return nums[left]; // The single element
    }
};
