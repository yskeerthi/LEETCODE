class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        vector<int>vec;
       while(left<right)
        {
            if(nums[left]+nums[right]==target)
            {
                vec.push_back(left+1);
                vec.push_back(right+1);
                return vec;
            }
            else if(nums[left]+nums[right]>target)
            {
                right--;
            }
            else{
                left++;
            }
        }
        return vec;
        
    }
};