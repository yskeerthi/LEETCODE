class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;

        int i = 0;
        int j = 1;

        while (j < n) {
            if (nums[i] < nums[j]) {
                int diff = nums[j] - nums[i];
                if (diff > maxi) {
                    maxi = diff;
                }
            } else {
               
                i = j;
            }
            j++; 
        }

        return maxi;
    }
};
