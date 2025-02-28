class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ocount = 0, ecount = 1, outputcount = 0;
        long long prefixSum = 0, mod = 1e9 + 7;

        for (int j = 0; j < n; j++) {
            prefixSum += nums[j];

            if (prefixSum % 2 != 0) {  
                ocount++;
                outputcount = (outputcount + ecount) % mod;
            } else {  
                ecount++;
                outputcount = (outputcount + ocount) % mod;
            }
        }
        return outputcount;
    }
};
