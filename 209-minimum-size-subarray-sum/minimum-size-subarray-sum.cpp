class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
       int left = 0, sum = 0;
       int minlength=INT_MAX;
        for(int right=0;right<n;right++)
        {
            sum+=nums[right];
            while(sum>=target)
            {
                minlength=min(minlength,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return (minlength==INT_MAX)?0:minlength;
    }
};