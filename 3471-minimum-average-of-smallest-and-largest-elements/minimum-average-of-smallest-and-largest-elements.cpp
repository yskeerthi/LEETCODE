class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        double sum = 0;
        int count = 0;
        sort(nums.begin(),nums.end());
        vector<double>a;
        while (i < j) {
            a.push_back((nums[i] + nums[j]) / 2.0);
            i++;
            j--;
        }
        sort(a.begin(),a.end());
        return a[0];
    }
};
