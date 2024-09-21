class Solution {
public:
    int rob(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int sum1 = 0;
    int sum2 = 0;
    for (int ele : nums) {
        int tmp = sum1;
        sum1 = max(sum2 + ele, sum1);
        sum2 = tmp;
    }
    return sum1;
    }
};