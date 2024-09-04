class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < nums.size(); ++i) {
            int count = std::count(nums.begin(), nums.end(), nums[i]);
            if (count > n / 2) {
                return nums[i];
            }
        }
        return -1;
    }
};
