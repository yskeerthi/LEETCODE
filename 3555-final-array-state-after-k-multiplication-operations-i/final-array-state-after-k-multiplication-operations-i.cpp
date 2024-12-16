class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--)
        {
            int minValue = *min_element(nums.begin(), nums.end());
            int minIndex = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[minIndex] = minValue * multiplier;

        }
        return nums;
    }
};