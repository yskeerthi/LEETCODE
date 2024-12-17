class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> original = nums; 
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; 
            int low = i + 1, high = nums.size() - 1; 
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == complement) {
                    for (int j = 0; j < original.size(); j++) {
                        if (original[j] == nums[i] || original[j] == complement) {
                            result.push_back(j);
                        }
                    }
                    return result;
                } else if (nums[mid] < complement) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        
        return result; 
    }
};
