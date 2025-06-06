class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> fullSet;  // To get total distinct elements
        for (int num : nums) {
            fullSet.insert(num);
        }
        int totalDistinct = fullSet.size(); // This is our target
        int count = 0;

        // Loop through all subarrays
        for (int i = 0; i < nums.size(); i++) {
            set<int> subarraySet;  // To track distinct in current subarray
            for (int j = i; j < nums.size(); j++) {
                subarraySet.insert(nums[j]);

                if (subarraySet.size() == totalDistinct) {
                    count++;
                }
            }
        }

        return count;
    }
};
