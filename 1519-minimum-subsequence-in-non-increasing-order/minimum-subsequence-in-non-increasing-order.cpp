class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end(), greater<int>());
        
        int total = accumulate(nums.begin(), nums.end(), 0);
        int currSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            res.push_back(nums[i]);
            if (currSum > total - currSum) break;
        }

        return res;
    }
};
