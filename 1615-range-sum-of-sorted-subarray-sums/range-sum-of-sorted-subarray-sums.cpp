class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9 + 7;
        vector<long long> sumarray;
        for (int i = 0; i < n; i++) {
            long long sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                sumarray.push_back(sum % MOD); 
            }
        }
        sort(sumarray.begin(), sumarray.end());
        long long totalSum = 0;
        for (int m = left - 1; m < right; m++) {
            totalSum = (totalSum + sumarray[m]) % MOD; 
        }

        return totalSum;
    }
};
