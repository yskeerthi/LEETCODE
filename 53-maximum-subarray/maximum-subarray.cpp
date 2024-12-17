class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int currsum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            currsum=max(nums[i],currsum+nums[i]);
            maxi=max(maxi,currsum);
        }
        return maxi;
    }
};