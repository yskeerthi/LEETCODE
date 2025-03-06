
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixSum(n+1, 0);
        int count = 0;
        for (int i = 0; i < n; i++) {
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        for (int start = 0; start < n; start++) {
            for (int end = start; end < n; end++) {
                if (prefixSum[end+1] - prefixSum[start] == k) {
                    count++;
                }
            }
        }

        return count;
    }
};
