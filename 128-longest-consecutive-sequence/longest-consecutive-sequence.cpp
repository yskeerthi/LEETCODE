class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

    sort(nums.begin(), nums.end()); 
    int maxLen = 1, currLen = 1;

    for (int i = 1; i < nums.size(); i++) {

        if (nums[i] == nums[i - 1]) continue; 
        if (nums[i] == nums[i - 1] + 1) {
            currLen++; 
        } else {
            maxLen = max(maxLen, currLen); 
            currLen = 1; 
        }
    }
    return max(maxLen,currLen);
    }
};