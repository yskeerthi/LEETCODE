class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end()); 
        int high = 0;
        for (int num : nums) {
            high += num;
        }
        while (low < high) {
            int mid = low + (high - low) / 2; 
            int count = 1; 
            int currentSum = 0;
            for (int num : nums) {
                currentSum += num; 
                if (currentSum > mid) { 
                    count++; 
                    currentSum = num; 
                }
            }
            if (count > k) {
                low = mid + 1; 
            } else {
                high = mid; 
            }
        }

        return low; // This will be the minimum largest sum
    }
};
